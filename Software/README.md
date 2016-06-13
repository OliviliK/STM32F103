#Software

##Libraries
These libraries are developed on top of the Standard Peripheral Libraries (SPL) that can be automatically included in EmBitz when starting a new project.

In the previous Wiki (F401/F429), the libraries followed theme used in SPL, where the source files (*.c) were in "src" folder and header files (*.h) were in "inc" folder.

In this F103 Wiki, there are subfolders for each library and those subfolders do contain all involved files.

The standard files from STM, such as SPL, and EmBitz, such as project files (*.ebp), loader files (*.ld), and initialization assembly files (*.S) are not included in this GitHub.  They are created by EmBitz as part of the development process.

##Examples
The examples contain the EmBitz files demonstrating the capabilities of the libraries.

##Directory Structure
The only practical limitation in the filepaths is that all Libraries have to be in a fixed location.  In the first example (Hello World), the default location is **C:\CommonLibs\STM32F103**. Any other location can be used, but then the examples have to be modified for the different location.
