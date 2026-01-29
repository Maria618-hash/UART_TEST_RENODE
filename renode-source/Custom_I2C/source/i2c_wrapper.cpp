// Copyright (c) 2010-2025 Antmicro
// This file is licensed under the MIT License.
// Full license text is available in 'LICENSE' file.

#include <verilated.h>
#include "Vi2c_master_top.h"

#include <cstdint>
#include <cstdlib>
#include <iostream>

#if VM_TRACE
# include <verilated_fst_c.h>
#endif

#include "buses/wishbone.h"
#include "renode_bus.h"

namespace
{
class SimpleI2CSlave
{
public:
    explicit SimpleI2CSlave(uint8_t address) : address(address)
    {
        reset();
    }

    void reset()
    {
        active = false;
        addressPhase = true;
        readMode = false;
        ackPhase = false;
        bitIndex = 7;
        rxByte = 0;
        lastWritten = 0xA5;
        txByte = lastWritten;
        driveLow = false;
        prevScl = true;
        prevSda = true;
    }

    void step(bool scl, bool sda)
    {
        const bool start = (prevSda && !sda && scl);
        const bool stop = (!prevSda && sda && scl);
        if(start)
        {
            active = true;
            addressPhase = true;
            readMode = false;
            ackPhase = false;
            bitIndex = 7;
            rxByte = 0;
            driveLow = false;
        }
        if(stop)
        {
            active = false;
            ackPhase = false;
            driveLow = false;
        }

        const bool rising = (!prevScl && scl);
        const bool falling = (prevScl && !scl);

        if(active)
        {
            if(readMode)
            {
                if(falling && !ackPhase)
                {
                    const bool bit = ((txByte >> bitIndex) & 0x1) != 0;
                    driveLow = !bit;
                }
                if(rising)
                {
                    if(!ackPhase)
                    {
                        if(bitIndex == 0)
                        {
                            ackPhase = true;
                            driveLow = false; // release for master's ACK
                        }
                        else
                        {
                            bitIndex--;
                        }
                    }
                    else
                    {
                        // master ACK/NACK after read
                        ackPhase = false;
                        bitIndex = 7;
                        if(sda) // NACK
                        {
                            active = false;
                        }
                    }
                }
            }
            else
            {
                if(rising)
                {
                    if(!ackPhase)
                    {
                        rxByte = (uint8_t)((rxByte << 1) | (sda ? 1 : 0));
                        if(bitIndex == 0)
                        {
                            ackPhase = true;
                            bool ack = true;
                            if(addressPhase)
                            {
                                const uint8_t addr = (uint8_t)(rxByte >> 1);
                                readMode = (rxByte & 0x1) != 0;
                                addressPhase = false;
                                if(addr != address)
                                {
                                    ack = false;
                                    active = false;
                                }
                                else if(readMode)
                                {
                                    txByte = lastWritten;
                                }
                            }
                            else
                            {
                                lastWritten = rxByte;
                                txByte = lastWritten;
                            }

                            driveLow = ack;
                            bitIndex = 7;
                            rxByte = 0;
                        }
                        else
                        {
                            bitIndex--;
                        }
                    }
                    else
                    {
                        ackPhase = false;
                        driveLow = false;
                    }
                }
            }
        }

        prevScl = scl;
        prevSda = sda;
    }

    bool driveLowSda() const
    {
        return driveLow;
    }

private:
    uint8_t address;
    bool active;
    bool addressPhase;
    bool readMode;
    bool ackPhase;
    int bitIndex;
    uint8_t rxByte;
    uint8_t lastWritten;
    uint8_t txByte;
    bool driveLow;
    bool prevScl;
    bool prevSda;
};

static Vi2c_master_top* top = nullptr;
static RenodeAgent* agent = nullptr;
static SimpleI2CSlave slave(0x50);
static uint8_t wb_sel_dummy = 0;

#if VM_TRACE
static VerilatedFstC* tfp = nullptr;
vluint64_t main_time = 0;
#endif

static void updateInputs(bool updateSlave)
{
    const bool masterSclLow = (top->scl_padoen_o == 0);
    const bool masterSdaLow = (top->sda_padoen_o == 0);

    bool scl = masterSclLow ? 0 : 1;
    bool sda = (masterSdaLow || slave.driveLowSda()) ? 0 : 1;

    if(updateSlave)
    {
        slave.step(scl, sda);
        sda = (masterSdaLow || slave.driveLowSda()) ? 0 : 1;
    }

    top->scl_pad_i = scl;
    top->sda_pad_i = sda;
}

void eval()
{
    top->arst_i = 0;

    updateInputs(false);
    top->eval();
    updateInputs(true);

#if VM_TRACE
    main_time++;
    tfp->dump(main_time);
#endif
}
} // namespace

static void initBus(RenodeAgent* agent)
{
    Wishbone* bus = new Wishbone();

    bus->wb_clk    = &top->wb_clk_i;
    bus->wb_rst    = &top->wb_rst_i;
    bus->wb_cyc    = &top->wb_cyc_i;
    bus->wb_stb    = &top->wb_stb_i;
    bus->wb_we     = &top->wb_we_i;
    bus->wb_ack    = &top->wb_ack_o;
    bus->wb_addr   = (uint8_t*)&top->wb_adr_i;
    bus->wb_rd_dat = (uint8_t*)&top->wb_dat_o;
    bus->wb_wr_dat = (uint8_t*)&top->wb_dat_i;
    bus->wb_sel    = &wb_sel_dummy;

    bus->addr_lines = 3;   // wb_adr_i[2:0]
    bus->granularity = 1;  // 8-bit registers

    bus->evaluateModel = &eval;
    agent->addBus(bus);
}

RenodeAgent* Init()
{
    const char* argv[] = { nullptr };
    Verilated::commandArgs(0, argv);

    top = new Vi2c_master_top();
    top->scl_pad_i = 1;
    top->sda_pad_i = 1;
    top->arst_i = 0;

#if VM_TRACE
    Verilated::traceEverOn(true);
    tfp = new VerilatedFstC;
    top->trace(tfp, 1);
    tfp->open("/home/ammara/renode-source/Custom_I2C/source/i2c_trace.fst");
#endif

    agent = new RenodeAgent();
    agent->connectNative();
    initBus(agent);

    return agent;
}
