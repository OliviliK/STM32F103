#CSV Excel Files
These files were created by Excel using the following method
  * Open the datasheets
    * stm32F103 Medium-density performance line datasheet
    * stm32F103 High-density performance line datasheet
  * In the PDF file chapter 3, Pinouts and pin descriptions
    * Copy the multipage table into a text file
  * Use a VBA macro to parse the text file
  * Do manual corrections, due to irregular layout in PDF file
  * Select one package type at time and save the info in Comma Separated Value format
  
The CSV files were converted into HTML table objects using a Python program

This process is quite repeatable and can be used for other MCU models - if required.

## Medium Density Chip with 48 Pins
Column 'Baite' was added to map the pins to the popular Blue Pill board manufactured by Baite.  It is a clone for the LeafLab Maple Mini board.

## Medium Density Chip with 64 Pins
Column 'Maple' was added to map the pins to the new DG32F103RBT6 board manufactured by Olimexino.  Originally the Olimexino board had the same STM32 processor as the original LeafLab Maple revision 5 board. The following covetions are used:
 * Dxx = pin number printed on the board
 * Dxx/Ax = pin number printed on the board and the corresponding analog number
 * Lx = the led numbers (1 = green, 2 = yellow)
 * Ex = Extension connector pin number (female)
 * Ux = UEXT connector pin number (male)
 * SWDx = Mini SWD connector pin number (male)
 * Cxx = CAN transmitter and receiver signals for the internal tranceiver.
 
 The tranceiver is connected to the Low and High pins in the CAN connector.
