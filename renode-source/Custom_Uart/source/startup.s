/* startup.s - minimal RISC-V 32-bit startup */

    .section .init
    .globl _start
_start:
    /* Set stack pointer to end of RAM */
    la sp, _stack_start

    /* Call main function */
    call main

1:  j 1b  /* Infinite loop after main */

