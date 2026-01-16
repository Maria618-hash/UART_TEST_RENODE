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

#define UART_CLOCK_HZ 80000000u
#define UART_BAUD_DEFAULT 115200u
#define UART_BAUD_SWEEP 1


// =====================================================================
// UART Driver Functions
// =====================================================================

static uint16_t uart_calc_divisor(uint32_t baud) {
    if (baud == 0) {
        return 1;
    }
    uint32_t divisor = (UART_CLOCK_HZ + (baud * 8u)) / (baud * 16u);
    if (divisor == 0) {
        divisor = 1;
    }
    if (divisor > 0xFFFFu) {
        divisor = 0xFFFFu;
    }
    return (uint16_t)divisor;
}

static void uart_set_baud_rate(uint32_t baud) {
    uint16_t divisor = uart_calc_divisor(baud);

    // Enable Divisor Latch Access (DLAB = 1) in LCR
    UART_LCR = LCR_DLAB;
    volatile uint8_t dummy = UART_LCR;
    (void)dummy;

    UART_DLL = (uint8_t)(divisor & 0xFFu);
    UART_DLH = (uint8_t)((divisor >> 8) & 0xFFu);

    // Set character framing: 8 data bits, No parity, 1 stop bit (8N1).
    // This also disables DLAB (DLAB = 0).
    UART_LCR = 0x03;
}

/**
 * @brief Initializes the UART for 80MHz clock, 115200 baud, 8N1 framing, and FIFOs enabled.
 */
void uart_init() {
    // 1. Disable interrupts initially
    UART_IER = 0x00; 

    uart_set_baud_rate(UART_BAUD_DEFAULT);

    // 2. Enable and clear FIFOs, set trigger level (0x07: enable, TX/RX reset)
    UART_FCR = 0x07; 
    
    // 3. Neutralize Modem Control Register (MCR): Set to 0x00.
    // This avoids asserting DTR/RTS/OUT2, which can cause issues in some emulations
    // that rely on these signals being properly connected or modeled.
    UART_MCR = 0x00;
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

static void uart_puts(const char *str) {
    while (*str) {
        uart_putc(*str++);
    }
}

// =====================================================================
// Main Application
// =====================================================================

int main() {
    // Initialize the UART hardware
    uart_init();

#if UART_BAUD_SWEEP
    static const struct {
        uint32_t baud;
        const char *message;
    } baud_tests[] = {
        {9600u, "Baud 9600: Hello UART1-STRIVE-I from Renode!\n"},
        {19200u, "Baud 19200: Hello UART1-STRIVE-I from Renode!\n"},
        {38400u, "Baud 38400: Hello UART1-STRIVE-I from Renode!\n"},
        {57600u, "Baud 57600: Hello UART1-STRIVE-I from Renode!\n"},
        {115200u, "Baud 115200: Hello UART1-STRIVE-I from Renode!\n"},
    };

    for (size_t i = 0; i < (sizeof(baud_tests) / sizeof(baud_tests[0])); i++) {
        uart_set_baud_rate(baud_tests[i].baud);
        uart_puts(baud_tests[i].message);
    }
#else
    uart_set_baud_rate(UART_BAUD_DEFAULT);
    uart_puts("Hello UART1-STRIVE-I from Renode!\n");
#endif

    // Loop forever after the message is sent
    while (1);
}
