// Copyright (c) 2010-2025 Antmicro
//
// This file is licensed under the MIT License.
// Full license text is available in 'licenses/MIT.txt'.

#pragma once

#include "../renode_bus.h"
#include "../buses/bus.h"

// SPIAction must be in sync with Renode's protocol
enum SPIAction {
    spiDataRequest = 15,
    spiModeRequest = 16
};

// SPI agent class
struct SPI : RenodeAgent {
public:
    // Constructor & Destructor
    SPI(uint8_t* out_spi,
        uint8_t* in_spi,
        uint8_t* clk_spi,
        uint8_t* cs_spi,
        uint8_t* inta_o,
        uint32_t data_reg_addr = 0x10);

    virtual ~SPI();

    // Evaluate SPI agent state (e.g., interrupt line)
    void eval();

    // SPI line pointers (1-bit signals)
    uint8_t* out_spi;
    uint8_t* in_spi;
    uint8_t* clk_spi;
    uint8_t* cs_spi;
    uint8_t* inta_o;

    // SPI data register address and internal state
    uint32_t data_reg_addr;
    uint8_t  prev_inta_o;
    uint32_t spi_mode; // Track SPI mode register value
    uint32_t prev_spi_mode;
    uint32_t spi_response;
    uint64_t returnValue;
    bool master_mode_announced;
    bool loopbackEnabled;
    uint8_t loopbackData;

    uint8_t readByte(long offset);
    void writeByte(long offset, uint32_t value);

protected:
    // Overrides for bus access and custom requests
    void writeToBus(int width, uint64_t addr, uint64_t value) override;
    void readFromBus(int width, uint64_t addr) override;
    void handleCustomRequestType(Protocol* message) override;

    // SPI operations
    virtual void SpiModeChange(uint32_t mode);
};

