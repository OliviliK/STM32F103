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
