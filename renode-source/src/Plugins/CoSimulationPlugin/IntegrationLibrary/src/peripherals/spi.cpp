//  
// Copyright (c) 2010-2025 Antmicro  
//  
// This file is licensed under the MIT License.  
// Full license text is available in 'licenses/MIT.txt'.  
//  
#include "spi.h"  
#include <bitset>  
#include <iostream>  
#include <ostream>   
  
SPI::SPI(uint32_t* mosi_o, uint32_t* miso_i, uint32_t* sck_o, uint8_t* ss_o, int ss_width, int tx_rx_reg) : RenodeAgent() {  
    this->mosi_o = mosi_o;  
    this->miso_i = miso_i;  
    this->sck_o = sck_o;  
    this->ss_o = ss_o;  
    this->ss_width = ss_width;  
    this->tx_rx_reg = tx_rx_reg;  
    this->prev_irq = 0;  
  
    // Set SPI lines idle state  
    *this->sck_o = 0;  
    *this->mosi_o = 1;  
    for(int i = 0; i < ss_width; i++) {  
        this->ss_o[i] = 1;  // Active low, so idle high  
    }  
}  
  
SPI::~SPI() {}  
  
void SPI::eval() {  
        
}  
  
void SPI::Mosi() {    
    // Wait for chip select to go low (active)  
    for(int i = 0; i < ss_width; i++) {  
        if(ss_o[i] != 0) {  
            return;  // Not selected  
        }  
    }  
      
    uint8_t data = 0;    
    for(int i = 7; i >= 0; i--) {    
        // Wait for clock rising edge  
        while(*sck_o == 0);  
          
        // Sample data on rising edge (MSB first)  
        if(*mosi_o) {      
            data |= (1 << i);  
        }  
          
        // Wait for clock falling edge  
        while(*sck_o == 1);  
    }     
   
    // Send the received data to Renode  
    communicationChannel->sendSender(Protocol(mosiRequest, 0, data));    
}  
  
void SPI::Miso(uint8_t value) {  
    // Wait for chip select to go low (active)  
    for(int i = 0; i < ss_width; i++) {  
        if(ss_o[i] != 0) {  
            return;  // Not selected  
        }  
    }  
      
    std::bitset<8> buffer(value);  
     
    for(int i = 7; i >= 0; i--) {  
        // Wait for clock falling edge to setup data  
        while(*sck_o == 1);  
          
        // Set MISO data  
        *miso_i = (value >> i) & 1;  
          
        // Wait for clock rising edge (data sampled by master)  
        while(*sck_o == 0);  
    }  
      
    // Return MISO to idle state  
    *miso_i = 1;  
}  
  
void SPI::handleCustomRequestType(Protocol* message) {  
    switch(message->actionId) {  
        case misoRequest:  
            Miso(message->value);  
            break;  
    }  
}  
  
void SPI::writeToBus(int width, uint64_t addr, uint64_t value) {  
    RenodeAgent::writeToBus(width, addr, value);  
    
     // Convert absolute addresses to register offsets  
    uint64_t offset = addr - 0x80001100; 
    
     
    // Track control register writes   
    if(offset == 0x00) {    
        lineControl = value;    
    }    
    
    // Handle loopback control in SPER register 
    if(offset == 0x03) {  
        loopbackEnabled = (value & 0x01) != 0; // Bit 0 enables loopback  
    }  
    
   
    if(offset == tx_rx_reg && (lineControl & 0x40)) {    
        // SPI enable bit set (SPE bit in SPCR)    
        if(loopbackEnabled) {  
            // Loopback: send data directly back instead of normal MOSI 
             loopbackData = (uint8_t)value; 
            communicationChannel->sendSender(Protocol(mosiRequest, 0, (uint8_t)value));  
        } else {  
            Mosi(); // Normal SPI transmission  
        }  
    } 
    }
    
void SPI::readFromBus(int width, uint64_t addr) {    
    uint64_t offset = addr - 0x80001100;    
        
    if(offset == tx_rx_reg) {    
        if(loopbackEnabled) {    
            //return loopbackData;    
        }    
    }    
        
     RenodeAgent::readFromBus(width, addr);   
} 

uint8_t SPI::readByte(long offset) {    
    if(offset == tx_rx_reg) {    
        if(loopbackEnabled) {    
            return loopbackData;    
        }    
    }    
    return 0;    
}    
    
void SPI::writeByte(long offset, uint8_t value) {    
    if(offset == 0x00) {    
        lineControl = value;    
    }    
    if(offset == 0x03) {    
        loopbackEnabled = (value & 0x01) != 0;    
    }    
    if(offset == tx_rx_reg && (lineControl & 0x40)) {    
        if(loopbackEnabled) {    
            loopbackData = value;    
        }    
    }    
}

