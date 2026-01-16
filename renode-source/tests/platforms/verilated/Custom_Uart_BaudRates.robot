*** Settings ***
Resource        ../../renode-keywords.robot
Suite Setup     Setup
Suite Teardown  Teardown
Test Setup      Test Setup
Test Teardown   Test Teardown

*** Variables ***
# Cosimulated peripherals cannot be snapshotted reliably (pointers/threadlocals).
${CREATE_SNAPSHOT_ON_FAIL}   False

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
    ...  """
    ...  cpu: CPU.RiscV32 @ sysbus
    ...  ${SPACE*4}cpuType: "rv32imc_zicsr_zifencei"
    ...  ${SPACE*4}privilegedArchitecture: PrivilegedArchitecture.Priv1_10
    ...  ${SPACE*4}timeProvider: clint
    ...
    ...  clint: IRQControllers.CoreLevelInterruptor @ sysbus 0x02000000
    ...  ${SPACE*4}frequency: ${UART_CLOCK_HZ}
    ...  ${SPACE*4}\[0, 1] -> cpu@[3, 7]
    ...
    ...  ram: Memory.MappedMemory @ sysbus 0x00000000
    ...  ${SPACE*4}size: 0x02000000
    ...
    ...  uart: CoSimulated.CoSimulatedUART @ sysbus <${UART_BASE}, +0x100>
    ...  ${SPACE*4}frequency: ${UART_CLOCK_HZ}
    ...  """

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
    ${m}=    Wait For Bytes On Uart  ${hex}  matchStart=false  timeout=10
    # Depending on Renode version, the keyword can return either:
    # - a match object with .Content
    # - a dict with 'content' key
    # - the matched bytes directly
    ${is_dict}=      Evaluate  isinstance($m, dict)
    ${has_content}=  Evaluate  hasattr($m, "Content")
    IF  ${is_dict}
        ${got}=  Set Variable  ${m['content']}
    ELSE IF  ${has_content}
        ${got}=  Set Variable  ${m.Content}
    ELSE
        ${got}=  Set Variable  ${m}
    END
    Should Be Equal  ${got}  ${bytes}

Send And Assert Bytes
    [Arguments]    ${bytes}
    Send Bytes            ${bytes}
    Assert Bytes Received  ${bytes}

*** Test Cases ***
Should Transmit Correctly Across Standard Baud Rates
    [Tags]    skip_host_arm
    Create Custom UART Machine
    # No CPU/ELF needed - we interact with the UART directly.

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
    # No CPU/ELF needed - we interact with the UART directly.

    # This is a *spot-check* over divisor space.
    # Full sweeps are prohibitively slow in cycle-accurate co-simulation at low baud rates.
    @{DIVISORS}=  Create List  5  8  16  32  64  128  256  521

    ${payload}=  Evaluate  bytes([0xA5])
    FOR  ${div}  IN  @{DIVISORS}
        Set UART Divisor       ${div}
        Send And Assert Bytes  ${payload}
    END

