// Copyright (c) 2010-2025 Antmicro
// Licensed under the MIT License

#include "spi-ms.h"
#include "../renode_bus.h"

#include <cstdio>
#include <cstdint>

// ------------------------------------------------------------
// Constructor
// ------------------------------------------------------------
SPI::SPI(uint8_t* out_spi,
         uint8_t* in_spi,
         uint8_t* clk_spi,
         uint8_t* cs_spi,
         uint8_t* inta_o,
         uint32_t data_reg_addr)
    : RenodeAgent()
{
    // Initialize SPI signal pointers
    this->out_spi = out_spi;
    this->in_spi  = in_spi;
    this->clk_spi = clk_spi;
    this->cs_spi  = cs_spi;
    this->inta_o  = inta_o;

    // Initialize data register address
    this->data_reg_addr = data_reg_addr;

    // Initialize SPI state
    spi_mode = 0; // SLAVE
    prev_spi_mode = 0;
    prev_inta_o = 0;
    master_mode_announced = false;
    spi_response = 0;
    loopbackEnabled = false;
    loopbackData = 0;

    // Set initial SPI line states (idle high)
    if(in_spi)  *in_spi  = 1;
    if(clk_spi) *clk_spi = 1;
    if(cs_spi)  *cs_spi  = 1;
}

// ------------------------------------------------------------
// Destructor
// ------------------------------------------------------------
SPI::~SPI() {}

// ------------------------------------------------------------
// Interrupt evaluation
// ------------------------------------------------------------
void SPI::eval()
{
    if(!inta_o) {
        return;
    }

    if (!communicationChannel) {
        this->log(1, "SPI: Communication channel not initialized");
        return;
    }

    // Handle interrupt state changes
    if(*inta_o == 1 && prev_inta_o == 0) {
        communicationChannel->sendSender(Protocol(interrupt, 1, 1));
    } else if(*inta_o == 0 && prev_inta_o == 1) {
        communicationChannel->sendSender(Protocol(interrupt, 1, 0));
    }

    prev_inta_o = *inta_o;
}

// ------------------------------------------------------------
// SPI mode change
// ------------------------------------------------------------
void SPI::SpiModeChange(uint32_t mode)
{
    if(mode == 1) {
        this->log(1, "SPI mode changed to: MASTER");
        loopbackEnabled = true; // Enable loopback in master mode
    } else {
        loopbackEnabled = false;
    }
}

// ------------------------------------------------------------
// Custom request handler
// ------------------------------------------------------------
void SPI::handleCustomRequestType(Protocol* /*message*/)
{
    // Handle custom protocol messages if needed
}

// ------------------------------------------------------------
// Byte-level interface for co-simulation
// ------------------------------------------------------------
uint8_t SPI::readByte(long offset)
{
    if(offset == (long)data_reg_addr) {
        // Only return data when CS is active (low) and loopback enabled
        if(loopbackEnabled && cs_spi && (*cs_spi == 0)) {
            this->log(1, "SPI: Loopback returning 0x%02X", loopbackData);
            return loopbackData;
        }
    }
    return 0;
}

void SPI::writeByte(long offset, uint32_t value)
{
    if(offset == 0xC0) {
        uint32_t new_mode = value & 0x1;
        spi_mode = new_mode;
        SpiModeChange(new_mode);
        return;
    }

    if(offset == (long)data_reg_addr) {
        // Only store data when CS is active (low) and loopback enabled
        if(loopbackEnabled && cs_spi && (*cs_spi == 0)) {
            loopbackData = (uint8_t)value;
            this->log(1, "SPI: Loopback storing 0x%02X", loopbackData);
        }
    }
}

// ------------------------------------------------------------
// Bus write handler (for register access)
// ------------------------------------------------------------
void SPI::writeToBus(int width, uint64_t addr, uint64_t value)
{
    // width is in bytes: 1 or 4
    RenodeAgent::writeToBus(width, addr, value);

    if(addr == data_reg_addr) {
        // Take lowest byte for 32-bit write
        uint32_t v = (width == 4) ? (uint32_t)(value & 0xFF) : (uint32_t)value;
        writeByte((long)addr, v);
    } else if(addr == 0xC0) {
        uint32_t new_mode = (uint32_t)(value & 0x1);
        spi_mode = new_mode;
        SpiModeChange(new_mode);
    }
}

// ------------------------------------------------------------
// Bus read handler (for register access)
// ------------------------------------------------------------
void SPI::readFromBus(int width, uint64_t addr)
{
    // width is in bytes: 1 or 4
    if(addr == data_reg_addr && loopbackEnabled) {
        // Bypass the underlying bus to avoid mixing in status bits.
        uint8_t byteValue = readByte((long)addr);
        uint64_t readValue = (width == 4) ? (uint32_t)byteValue : byteValue;
        communicationChannel->sendMain(Protocol(readRequest, addr, readValue));
        return;
    }

    RenodeAgent::readFromBus(width, addr);
}

