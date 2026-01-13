// 
// Copyright (c) 2010-2025 Antmicro
// 
// This file is licensed under the MIT License.
// Full license text is available in 'licenses/MIT.txt'.
// 
#include "../renode_bus.h"
#include "../buses/bus.h"
 
// SPIAction must be in sync with Renode's protocol
enum SPIAction
{
    mosiRequest = 15,
    misoRequest = 16
};
 
struct SPI : RenodeAgent
{
    public:
    // Added 'irq_o' to the constructor arguments
    // NOTE: tx_rx_reg is used to identify the data register address (0x10)
    SPI(uint32_t* mosi_o, uint32_t* miso_i, uint32_t* sck_o, uint32_t* ss_o, uint32_t* irq_o);
    virtual ~SPI();
    void eval();
    
    // Verilog Signal Pointers
    uint32_t* mosi_o;
    uint32_t* miso_i;
    uint32_t* sck_o;
    uint32_t* ss_o;
    uint32_t* irq_o;
    
    // State Variables
    uint8_t prev_irq;
    bool spi_active;
    
    // Bus-level interface for Renode (handling Wishbone transactions)
    uint32_t readByte(long offset);
    void writeByte(long offset, uint32_t value); // Changed value to uint32_t to match REG32 macro
    
    protected:
    void writeToBus(int width, uint64_t addr, uint64_t value) override;
    void readFromBus(int width, uint64_t addr) override;
    void handleCustomRequestType(Protocol* message) override;
    
    // SPI transaction handling functions
    void Mosi(uint8_t byte);
    uint8_t Miso();
};
