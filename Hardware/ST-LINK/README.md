# ST-LINK

## Versions

The low cost AliExpress ST_LINK devices use the older V2 standard.  For all practical purposes, they provide all required functionality.

The latest available version is V2.1.

## Connections

The ST-LINK device is either connected directly to PC/Laptop or an USB extension cable is used for longer distances.  There are large number of ST-LINK devices available and many of them have the same 8 or 10 pin layout.  This allows the usage of standard cables.

The most common cable is for F103 boards that have the 20 pin JTAG connector for debugging purposes.

## SWD Pins

The main mechanism used by ST-LINK is Serial Wire Debugging (SWD). At minimum, it uses the following three wires
  * GND for common ground
  * SWDCLK for synchronized data transfer
  * SWDIO for bidirectional data transfer
  
Additional wires are used for
  * 3V3 to power the board from USB through the ST-LINK device
    * This signal should not be connected in case, there is another power source for the board
  * RESET to reset the board
    * This is also know as NRST signal, Negative Reset, to indicate that a low voltage in this line resets the board
    * This signal is not easily available on all STM32F103 boards and is not mandatory
