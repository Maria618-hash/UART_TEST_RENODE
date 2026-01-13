*** Settings ***
Resource        ../../renode-keywords.robot
Suite Setup     Setup
Suite Teardown  Teardown
Test Setup      Test Setup
Test Teardown   Test Teardown

*** Variables ***
${UART_BASE}         0x80002000
${UART}              sysbus.uart
${LCR_OFFSET}        0xC
${DLL_OFFSET}        0x0
${DLH_OFFSET}        0x4
${THR_OFFSET}        0x0

# 16550-style: divisor = UARTCLK / (16 * baud)
${UART_CLOCK_HZ}     80000000
${OVERSAMPLING}      16

*** Keywords ***
Create Custom UART Machine
    Execute Command    using sysbus
    Execute Command    mach create
    ${platform}=  Catenate  SEPARATOR=\n
    ...  cpu: CPU.RiscV32 @ sysbus
    ...  ${SPACE*4}cpuType: "rv32imc_zicsr_zifencei"
    ...  ${SPACE*4}privilegedArchitecture: PrivilegedArchitecture.Priv1_10
    ...  ${SPACE*4}timeProvider: clint
    ...
    ...  clint: IRQControllers.CoreLevelInterruptor @ sysbus 0x02000000
    ...  ${SPACE*4}frequency: ${UART_CLOCK_HZ}
    ...      [0, 1] -> cpu@[3, 7]
    ...
    ...  ram: Memory.MappedMemory @ sysbus 0x00000000
    ...  ${SPACE*4}size: 0x02000000
    ...
    ...  uart: CoSimulated.CoSimulatedUART @ sysbus <${UART_BASE}, +0x100>
    ...  ${SPACE*4}frequency: ${UART_CLOCK_HZ}

    Execute Command    machine LoadPlatformDescriptionFromString ${platform}
    Execute Command    ${UART} SimulationFilePathLinux @${CURDIR}/../../../Custom_Uart/source/libVuart.so
    # Use binary mode so we can verify exact byte sequences (not line-based text).
    Create Terminal Tester  ${UART}  binaryMode=true

Set UART Divisor
    [Arguments]    ${div}
    ${dll}=        Evaluate    int(${div}) & 0xFF
    ${dlh}=        Evaluate    (int(${div}) >> 8) & 0xFF

    # DLAB=1
    Execute Command  ${UART} WriteByte ${LCR_OFFSET} 0x80
    Execute Command  ${UART} WriteByte ${DLL_OFFSET} ${dll}
    Execute Command  ${UART} WriteByte ${DLH_OFFSET} ${dlh}
    # 8N1, DLAB=0
    Execute Command  ${UART} WriteByte ${LCR_OFFSET} 0x03

Set UART Baud
    [Arguments]    ${baud}
    # 16550-style: divisor = round(UART_CLOCK_HZ / (OVERSAMPLING * baud))
    ${den}=        Evaluate    int(${OVERSAMPLING}) * int(${baud})
    ${div}=        Evaluate    max(1, int((int(${UART_CLOCK_HZ}) + (${den}//2)) // ${den}))
    Set UART Divisor  ${div}

Send Bytes
    [Arguments]    ${bytes}
    # ${bytes} is a Python bytes object
    FOR  ${b}  IN  @{{[x for x in $bytes]}}
        Execute Command  ${UART} WriteByte ${THR_OFFSET} ${b}
    END

Assert Bytes Received
    [Arguments]    ${bytes}
    ${hex}=  Evaluate  $bytes.hex()
    ${m}=    Wait For Bytes On Uart  ${hex}  matchStart=false  timeout=2
    Should Be Equal  ${m.Content}  ${bytes}

Send And Assert Bytes
    [Arguments]    ${bytes}
    Send Bytes            ${bytes}
    Assert Bytes Received  ${bytes}

*** Test Cases ***
Should Transmit Correctly Across Standard Baud Rates
    [Tags]    skip_host_arm
    Create Custom UART Machine
    Start Emulation

    # Typical baud rates + a couple of higher ones
    @{BAUDS}=  Create List  9600  19200  38400  57600  115200  230400  460800  921600
    ${payload}=  Evaluate  bytes([0x55, 0xAA, 0x00, 0xFF, 0x13, 0x37])
    FOR  ${baud}  IN  @{BAUDS}
        Set UART Baud  ${baud}
        Send And Assert Bytes  ${payload}
    END

Should Transmit Correctly Across Divisor Sweep
    [Tags]    skip_host_arm
    Create Custom UART Machine
    Start Emulation

    # This verifies the UART bit timing logic across a wide range of divisors (baud rates).
    # We keep it bounded to avoid excessive runtime.
    @{DIVISORS}=  Create List
    ...  1  2  3  4  5  6  7  8  9  10
    ...  12  16  24  32  48  64  96  128
    ...  160  192  224  256  384  512  768  1024
    ...  1536  2048  3072  4096  8192  16384  32768  65535

    ${payload}=  Evaluate  bytes([0x00, 0xFF, 0x11, 0x22, 0x33, 0x7E, 0x80, 0xA5, 0x5A])
    FOR  ${div}  IN  @{DIVISORS}
        Set UART Divisor  ${div}
        Send And Assert Bytes  ${payload}
    END

