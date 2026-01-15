#include <stdint.h>
#include <stddef.h> 

// =====================================================================
// 16550 UART Register Map Definitions
// Register addresses are 4-byte offsets from UART_BASE.
// =====================================================================
#define UART_BASE 0x80002000

// Address 0x00 (DLAB=0)
#define UART_RBR (*(volatile uint8_t *)(UART_BASE + 0x00)) // Read: Receiver Buffer Register
#define UART_THR (*(volatile uint8_t *)(UART_BASE + 0x00)) // Write: Transmitter Holding Register
// Address 0x00 (DLAB=1)
#define UART_DLL (*(volatile uint8_t *)(UART_BASE + 0x00)) // Read/Write: Divisor Latch LSB

// Address 0x04 
#define UART_IER (*(volatile uint8_t *)(UART_BASE + 0x04)) // Read/Write: Interrupt Enable Register
// Address 0x04 (DLAB=1)
#define UART_DLH (*(volatile uint8_t *)(UART_BASE + 0x04)) // Read/Write: Divisor Latch MSB

// Address 0x08
#define UART_IIR (*(volatile uint8_t *)(UART_BASE + 0x08)) // Read: Interrupt Identification Register
#define UART_FCR (*(volatile uint8_t *)(UART_BASE + 0x08)) // Write: FIFO Control Register

// Address 0x0C
#define UART_LCR (*(volatile uint8_t *)(UART_BASE + 0x0C)) // Read/Write: Line Control Register

// Address 0x10
#define UART_MCR (*(volatile uint8_t *)(UART_BASE + 0x10)) // Read/Write: Modem Control Register

// Address 0x14
#define UART_LSR (*(volatile uint8_t *)(UART_BASE + 0x14)) // Read: Line Status Register

// Address 0x18
#define UART_MSR (*(volatile uint8_t *)(UART_BASE + 0x18)) // Read: Modem Status Register

// Address 0x1C
#define UART_SCR (*(volatile uint8_t *)(UART_BASE + 0x1C)) // Read/Write: Scratch Pad Register


// =====================================================================
// Register Bit Definitions and Constants
// =====================================================================

// Line Control Register (LCR) bits
#define LCR_DLAB (1 << 7) // Divisor Latch Access Bit

// Line Status Register (LSR) bits
#define LSR_THRE (1 << 5) // Transmitter Holding Register Empty

// UART reference clock and oversampling factor (16550-style).
// baud ~= UART_CLOCK_HZ / (OVERSAMPLING * divisor)
#define UART_CLOCK_HZ 80000000u
#define OVERSAMPLING  16u


// =====================================================================
// UART Driver Functions
// =====================================================================

static void uart_set_divisor(uint16_t divisor)
{
    if(divisor == 0) {
        divisor = 1;
    }

    // Disable interrupts while reprogramming.
    UART_IER = 0x00;

    // Enable Divisor Latch Access.
    UART_LCR = LCR_DLAB;
    (void)UART_LCR; // dummy read

    UART_DLL = (uint8_t)(divisor & 0xFF);
    UART_DLH = (uint8_t)((divisor >> 8) & 0xFF);

    // 8N1 and disable DLAB.
    UART_LCR = 0x03;
}

static uint16_t uart_divisor_for_baud(uint32_t baud)
{
    // divisor = round(UART_CLOCK_HZ / (OVERSAMPLING * baud))
    const uint32_t den = OVERSAMPLING * baud;
    if(den == 0) {
        return 1;
    }
    uint32_t div = (UART_CLOCK_HZ + den/2u) / den;
    if(div == 0) {
        div = 1;
    }
    if(div > 0xFFFFu) {
        div = 0xFFFFu;
    }
    return (uint16_t)div;
}

static void uart_set_baud(uint32_t baud)
{
    uart_set_divisor(uart_divisor_for_baud(baud));
}

static void uart_init()
{
    // Enable and clear FIFOs, set trigger level (0x07: enable, TX/RX reset)
    UART_FCR = 0x07;
    // Neutralize Modem Control Register (MCR)
    UART_MCR = 0x00;
    // Default baud for startup: 115200
    uart_set_baud(115200);
}

/**
 * @brief Transmits a single character over the UART.
 *
 * @param c The character to transmit.
 */
void uart_putc(char c) {
    // Wait for the Transmitter Holding Register Empty (THRE) flag
    while (!(UART_LSR & LSR_THRE));

    // Write the character to the Transmitter Holding Register (THR)
    UART_THR = c;
}

static void uart_puts(const char* s)
{
    while(*s) {
        uart_putc(*s++);
    }
}

static void uart_put_hex8(uint8_t v)
{
    const char* hex = "0123456789ABCDEF";
    uart_putc(hex[(v >> 4) & 0xF]);
    uart_putc(hex[v & 0xF]);
}

static void uart_put_u32(uint32_t v)
{
    char buf[10];
    size_t n = 0;
    if(v == 0) {
        uart_putc('0');
        return;
    }
    while(v && n < sizeof(buf)) {
        buf[n++] = (char)('0' + (v % 10u));
        v /= 10u;
    }
    while(n) {
        uart_putc(buf[--n]);
    }
}

static void delay_cycles(volatile uint32_t loops)
{
    while(loops--) {
        __asm__ volatile("nop");
    }
}

// =====================================================================
// Main Application
// =====================================================================

int main() {
    // Initialize the UART hardware
    uart_init();

    uart_puts("UART BAUD VERIFY (waveform-based)\n");
    uart_puts("Pattern per baud: A5 5A 00 FF 55 AA\n");

    static const uint32_t bauds[] = {9600, 19200, 38400, 57600, 115200, 230400, 460800, 921600};
    static const uint8_t pattern[] = {0xA5, 0x5A, 0x00, 0xFF, 0x55, 0xAA};

    for(size_t i = 0; i < sizeof(bauds)/sizeof(bauds[0]); i++) {
        const uint32_t baud = bauds[i];
        const uint16_t div = uart_divisor_for_baud(baud);
        uart_set_divisor(div);

        uart_puts("\nBAUD=");
        uart_put_u32(baud);
        uart_puts(" DIV=");
        uart_put_u32(div);
        uart_puts(" DATA=");
        for(size_t j = 0; j < sizeof(pattern); j++) {
            uart_put_hex8(pattern[j]);
            uart_putc(' ');
        }
        uart_putc('\n');

        for(size_t j = 0; j < sizeof(pattern); j++) {
            uart_putc((char)pattern[j]);
        }
        uart_putc('\n');

        // Add some idle time between baud segments to make waveform measurement easy.
        delay_cycles(200000);
    }

    // Loop forever after the message is sent
    while (1);
}
