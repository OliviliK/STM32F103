# Hardware
## History
Several years ago LeafLabs developed a MCU board using Cortex M3 processor from ST Microelectronix (STM32F103), an Integrated Development Environment (IDE), and a core library (LibMaple).
The IDE was based on the same Processing/Wiring platform as used in Arduino IDE. Sadly, LeadLabs was not a commercial success, but its legacy lives due to
  * Low cost Maple Mini clones from Chinese vendors
  * Dedicated software support by STM32duino.com
  
### Repeated History
  The low cost Maple Mini clones and STMF103 were so popular that the ST MCU was used as a reference design by GigaDevices.  The GigaDevices MCUs have some improvements compared to ST MCUs. For example
  * GD32F103C8T6 can run at 108 or 120 MHz speed when STM32F103C8T6 is restricted to 72 MHz speed
  * GD32F103C8T6 has more completed Cortex M3 implementation than STM32F103C8T6, such as a register to indicate the available RAM size
  
## STM32 Micro Controller Families
  In addition of STM32F103, ST has large number of other families covering a large variety of capablities in power consumption, I/O capability, cost, and performance.

### STM32F103 Densities
  There is a lot of compatibilies between the ST Micro Controller Families and within the STM32F103 family the hardware and software compatibility is very high.
  To satisfy the different needs the following subfamilies are available
  * Low-density performance line, STM32F103x4 and STM32F103x6
  * Medium-density performance line, STM32F103x8 and STM32F103xB
  * High-density performance line, STM32F103xC, STM32F103xD, and STM32F103xE
  * XL-density performance line, STM32F103xF and STM32F103xG

 This GitHub will be focused only on medium deinsity and high density products due to available cost effective development tools.  
 The encoding of the ST product names is shown in STM32F103NameStructure.html.

## ARM Architectures

Cortex M3 is based on *ARMv7-M* architecture and as such supports
 * SysTick Timer for system level timing interrupts
 * Data Watchpoint and Trace (**DWT**) for system level cycle counting
 * Bit-banding for direct accessing SRAM and peripheral register bits. This is an optional feature and it is supported in all F103 processors.  It is optional also in Cortex M4, but is not supported in Cortex M7.

## Rendering the HTML files
  GitHub supports only storing text information.  The included html files can be rendered with a semi standard prefix, such as
  * http://htmlpreview.github.io/?https://github.com/OliviliK/STM32F103/blob/master/Hardware/STM32F103ProductList.html
  * http://htmlpreview.github.io/?https://github.com/OliviliK/STM32F103/blob/master/Hardware/STM32F103ProductName.html
  * http://htmlpreview.github.io/?https://github.com/OliviliK/STM32F103/blob/master/Hardware/STM32F103_High64.html
  * http://htmlpreview.github.io/?https://github.com/OliviliK/STM32F103/blob/master/Hardware/STM32F103_High100.html
  * http://htmlpreview.github.io/?https://github.com/OliviliK/STM32F103/blob/master/Hardware/STM32F103_High144.html
  * http://htmlpreview.github.io/?https://github.com/OliviliK/STM32F103/blob/master/Hardware/STM32F103_Med36.html
  * http://htmlpreview.github.io/?https://github.com/OliviliK/STM32F103/blob/master/Hardware/STM32F103_Med48.html
  * http://htmlpreview.github.io/?https://github.com/OliviliK/STM32F103/blob/master/Hardware/STM32F103_Med64.html
  * http://htmlpreview.github.io/?https://github.com/OliviliK/STM32F103/blob/master/Hardware/STM32F103_Med100.html
