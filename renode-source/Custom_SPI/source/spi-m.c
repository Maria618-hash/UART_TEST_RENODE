#include <stdint.h>
#include <stddef.h> 
  
#define SPI_BASE 0x80001100
#define SPCR     (SPI_BASE + 0x00)
#define SPSR     (SPI_BASE + 0x01)       //status
#define SPDR     (SPI_BASE + 0x02)      //write FIFO / read FIFO
#define SPER     (SPI_BASE + 0x03)      //extension / loopback
#define SPSS     (SPI_BASE + 0x04)     //slave select

void main() {  
    *((volatile uint8_t*)SPCR) = 0x40;  // Enable SPI  
    *((volatile uint8_t*)SPER) = 0x01;  // Enable loopback  
    *((volatile uint8_t*)SPDR) = 0xAA;  // Write test data  
      
    // Add this verification  
    uint8_t received = *((volatile uint8_t*)SPDR);  
    if (received == 0xAA) {  
        // Loopback successful!  
        while(1) {}  // Halt on success  
    }  
}

