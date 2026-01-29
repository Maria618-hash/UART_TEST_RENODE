#include <stdint.h>

#define I2C_BASE       0x00001800

#define REG_PRER_LO    0x00
#define REG_PRER_HI    0x01
#define REG_CTR        0x02
#define REG_TXR        0x03
#define REG_RXR        0x03
#define REG_CR         0x04
#define REG_SR         0x04

#define CR_STA         0x80
#define CR_STO         0x40
#define CR_RD          0x20
#define CR_WR          0x10
#define CR_ACK         0x08

#define SR_RXACK       0x80
#define SR_TIP         0x02

#define REG8(addr) (*(volatile uint8_t *)(addr))

static void i2c_wait(void)
{
    while (REG8(I2C_BASE + REG_SR) & SR_TIP) { }
}

int main(void)
{
    const uint8_t slave_addr = 0x50;
    const uint8_t test_value = 0x3C;
    uint8_t read_value;

    // Prescaler for ~100kHz @ 80MHz: (80MHz / (5*100k)) - 1 = 159
    REG8(I2C_BASE + REG_PRER_LO) = 0x9F;
    REG8(I2C_BASE + REG_PRER_HI) = 0x00;
    REG8(I2C_BASE + REG_CTR) = 0x80; // enable core

    // Write slave address + write bit
    REG8(I2C_BASE + REG_TXR) = (uint8_t)((slave_addr << 1) | 0);
    REG8(I2C_BASE + REG_CR) = CR_STA | CR_WR;
    i2c_wait();
    if (REG8(I2C_BASE + REG_SR) & SR_RXACK) while(1);

    // Write data byte and stop
    REG8(I2C_BASE + REG_TXR) = test_value;
    REG8(I2C_BASE + REG_CR) = CR_WR | CR_STO;
    i2c_wait();
    if (REG8(I2C_BASE + REG_SR) & SR_RXACK) while(1);

    // Write slave address + read bit
    REG8(I2C_BASE + REG_TXR) = (uint8_t)((slave_addr << 1) | 1);
    REG8(I2C_BASE + REG_CR) = CR_STA | CR_WR;
    i2c_wait();
    if (REG8(I2C_BASE + REG_SR) & SR_RXACK) while(1);

    // Read one byte and stop, NACK after read
    REG8(I2C_BASE + REG_CR) = CR_RD | CR_STO | CR_ACK;
    i2c_wait();
    read_value = REG8(I2C_BASE + REG_RXR);

    if (read_value != test_value) while(1);

    while(1);
    return 0;
}
