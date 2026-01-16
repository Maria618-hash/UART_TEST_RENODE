//
// Copyright (c) 2010-2025 Antmicro
//
// This file is licensed under the MIT License.
// Full license text is available in 'licenses/MIT.txt'.
//
#include "uart.h"
#include <bitset>
#include <iostream>
#include <ostream> 

namespace {
constexpr uint8_t kLcrDlabMask = 0x80;
constexpr uint32_t kDllOffset = 0x0;
constexpr uint32_t kDlhOffset = 0x4;
constexpr uint32_t kLcrOffset = 0xC;
constexpr uint32_t kBaudOversample = 16;
} // namespace

UART::UART(uint8_t* txd, uint8_t* rxd, uint32_t prescaler, uint32_t tx_reg_addr, uint8_t* irq) : RenodeAgent() {
    this->txd = txd;
    this->rxd = rxd;
    this->irq = irq;

    this->prescaler = prescaler;
    this->tx_reg_addr = tx_reg_addr;
    this->prev_irq = 0;
    uint32_t initialDivisor = (prescaler + (kBaudOversample / 2)) / kBaudOversample;
    if(initialDivisor == 0) {
        initialDivisor = 1;
    }
    divisorLatchLow = static_cast<uint8_t>(initialDivisor & 0xFF);
    divisorLatchHigh = static_cast<uint8_t>((initialDivisor >> 8) & 0xFF);

    // Set rxd line idle state
    *this->rxd = 1;
}

UART::~UART() {}

void UART::eval() {
    if (irq != nullptr) {
        if (*irq == 1 && prev_irq == 0) {
            communicationChannel->sendSender(Protocol(interrupt, 1, 1));
        }

        if (*irq == 0 && prev_irq == 1) {
            communicationChannel->sendSender(Protocol(interrupt, 1, 0));
        }
        prev_irq = *irq;
    }
     
}

void UART::Txd() {  
        timeoutTick(txd, 0);  // Wait for start bit  
        tick(true, prescaler + prescaler/2);
      
    uint8_t data = 0;  
    for(int i = 0; i < 8; i++) {  
        //tick(true, prescaler);  // Data bit  
        if(*txd) {    
            data |= (1 << i);  // LSB first    
        }
        
        tick(true, prescaler);  // Stop bit     
    }   
 
       // Send the actual data, not an empty buffer  
    communicationChannel->sendSender(Protocol(txdRequest, 0, data));  

}

void UART::Rxd(uint8_t value) {
    std::bitset<8> buffer(value);
   
       *rxd = 0;
    tick(true, prescaler);          // Start bit
    for(int i = 0; i < 8; i++) {
      
      *rxd = (value >> i) & 1;
        tick(true, prescaler);     // Data bit
    }
    *rxd = 1;
    tick(true, prescaler);        // Stop bit
}

void UART::updatePrescalerFromDivisor()
{
    uint16_t divisor = static_cast<uint16_t>(divisorLatchLow) |
        static_cast<uint16_t>(divisorLatchHigh << 8);
    if(divisor == 0) {
        return;
    }
    // Standard 16550 UARTs use 16x oversampling.
    prescaler = static_cast<uint32_t>(divisor) * kBaudOversample;
}

void UART::handleCustomRequestType(Protocol* message) {
    switch(message->actionId) {
        case rxdRequest:
            Rxd(message->value);
            break;
    }
}

void UART::writeToBus(int width, uint64_t addr, uint64_t value) {
    RenodeAgent::writeToBus(width, addr, value);
    
    // Track Line Control Register writes 
    if(addr == kLcrOffset) {  
        lineControl = static_cast<uint8_t>(value);  
    }  
    
    bool dlab = (lineControl & kLcrDlabMask) != 0;
    if(dlab) {
        if(addr == kDllOffset) {
            divisorLatchLow = static_cast<uint8_t>(value);
            updatePrescalerFromDivisor();
        } else if(addr == kDlhOffset) {
            divisorLatchHigh = static_cast<uint8_t>(value);
            updatePrescalerFromDivisor();
        }
    }

    if(addr == tx_reg_addr && !dlab) {
        // We are waiting for low state on txd line, which indicates beginning of a transmission.
        // Invalid data can be read otherwise.
       // timeoutTick(txd, 0);
        Txd();
    }
}
