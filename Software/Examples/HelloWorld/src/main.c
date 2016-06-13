/*
**
**                           HelloWorld Main.c
**
**
**********************************************************************/
/*
   Last committed:      Rev 1.0
   Last changed by:     Olavi Kamppari
   Last changed date:   Jun 12, 2015
   Platform:            STM32F103
   Processor:           Any Medium Density (x8/xB) or
                        High Density (xC, xD, or xE) MCU
   Board:               Blue Pill (STM32F103C8)
   Description:         Printf with semihosting through ST-LINK

**********************************************************************/
#include <stdio.h>
#include "stm32f10x_conf.h"

int main(void) {
    printf("\fHello World\n");
    while(1);
}
