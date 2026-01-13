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

${PLATFORM}=     SEPARATOR=${\n}
...  """
...  cpu: CPU.RiscV32 @ sysbus
...  ${SPACE*4}cpuType: "rv32imc_zicsr_zifencei"
...  ${SPACE*4}privilegedArchitecture: PrivilegedArchitecture.Priv1_10
...  ${SPACE*4}timeProvider: clint
...
...  clint: IRQControllers.CoreLevelInterruptor @ sysbus 0x02000000
...  ${SPACE*4}frequency: ${UART_CLOCK_HZ}
...  ${SPACE*4}\\[0, 1\\] -> cpu@\\[3, 7\\]
...
...  ram: Memory.MappedMemory @ sysbus 0x00000000
...  ${SPACE*4}size: 0x02000000
...
...  uart: CoSimulated.CoSimulatedUART @ sysbus <${UART_BASE}, +0x100>
...  ${SPACE*4}frequency: ${UART_CLOCK_HZ}
...  """

*** Keywords ***
Create Custom UART Machine
    Execute Command    using sysbus
    Execute Command    mach create
    Execute Command    machine LoadPlatformDescriptionFromString ${PLATFORM}
    Execute Command    ${UART} SimulationFilePathLinux @${CURDIR}/../../../Custom_Uart/source/libVuart.so
    Create Terminal Tester  ${UART}

Set UART Baud
    [Arguments]    ${baud}
    # divisor = round(UART_CLOCK_HZ / (OVERSAMPLING * baud))
    ${den}=        Evaluate    int(${OVERSAMPLING}) * int(${baud})
    ${div}=        Evaluate    max(1, int((int(${UART_CLOCK_HZ}) + (${den}//2)) // ${den}))
    ${dll}=        Evaluate    int(${div}) & 0xFF
    ${dlh}=        Evaluate    (int(${div}) >> 8) & 0xFF

    # DLAB=1
    Execute Command  ${UART} WriteByte ${LCR_OFFSET} 0x80
    Execute Command  ${UART} WriteByte ${DLL_OFFSET} ${dll}
    Execute Command  ${UART} WriteByte ${DLH_OFFSET} ${dlh}
    # 8N1, DLAB=0
    Execute Command  ${UART} WriteByte ${LCR_OFFSET} 0x03

Send And Assert Char
    [Arguments]    ${ch}
    # Terminal tester matches on lines - send a newline as well.
    Execute Command     ${UART} WriteByte ${THR_OFFSET} ${{ord($ch)}}
    Execute Command     ${UART} WriteByte ${THR_OFFSET} 0x0A
    Wait For Line On Uart  ${ch}  timeout=2

*** Test Cases ***
Should Transmit Correctly Across Baud Rates
    [Tags]    skip_host_arm
    Create Custom UART Machine
    Start Emulation

    # Typical baud rates + a couple of higher ones
    @{BAUDS}=  Create List  9600  19200  38400  57600  115200  230400  460800  921600

    # Send one character per baud to ensure the UART agent re-locks after divisor changes.
    ${i}=  Set Variable  0
    FOR  ${baud}  IN  @{BAUDS}
        Set UART Baud  ${baud}
        ${ch}=  Evaluate  chr(ord('A') + int($i))
        Send And Assert Char  ${ch}
        ${i}=  Evaluate  int($i) + 1
    END

