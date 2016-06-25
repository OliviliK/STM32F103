# STM32F103/GD32F103 Board Vendors

## Vendors

The boards I have been using in development of this repository are available from
  * Amazon.com for quick delivery
  * Ebay.com for large selection
  * Mouser.com for Nucleo boards
  * Aliexpress.com, for good selections and excellent prices
  * Taobao.com, for additional selections and very competititve prices
  
I have been very pleased for the Aliexpress purchases.  The prices are good and delivery reliability has been good - although the delivery times are long.

The challenge with Taobao is that all the descriptions are in Chinese and the prices are in Yuans.

## Manufacturers

Many boards are without any indications of board names or manufacturing origins.  Here are some of the identified manufacturers
  * [HAOYU Electronics](http://www.hotmcu.com), I have been using their lightweight HY Tiny board, but they have several other F103 products
  * [VCC-GND](http://www.vcc-gnd.com), I am very pleased for their $2 dollar board, that is often known as Blue Pill.  Also their larger VC and ZE boards can be recommended
  * [Shenzhen LC Technology Co](http://www.chinalctech.com/index.php?_m=mod_product&_a=prdlist&cap_id=72), I have mixed feeling about thier products.  They seem to have a high functionality, but the manufacturing quality is a potential issue.
  * **Baite**, I don't have their web address.  They are the manufacturer of a very high quality Maple Mini clone.
  * [STM](st.com), I have a large number of their discovery and nucleo boards. In this repository, only the Nucleo-F103RB is relevant
  * **ME**, I don't have their web address.  I like the boards with the letters ME in a circle.  They could be the manufacturer or designer of very nice F103 boards.
  
## Sample Boards

Here is a list of F103 boards, I have used so far.

| Name | Mfct | Price | Processor | Speed MHz | Flash kB | SRAM kB | Package | I/O Pins | SWD | UART | Usr Btn | Usr LED | Dimensions XxWxL in | Weight g | Mount |
|---|---|---:|---|---:|---:|---:|---:|---:|---|---|---|---|---|---:|---|
|**[HY Tiny](https://github.com/OliviliK/STM32F103/wiki/F103TB)** | PowerMCU | $6.11  | STM32F103TBU6 | 72 | 128 | 20 | 36 | 25 | hdr | hdr |  | PA1 | 0.24x0.84x1.55 | 2 | BrBrd |
|**[Blue Pill](https://github.com/OliviliK/STM32F103/wiki/F103C8)** | VCC-GND | $1.96  | STM32F103C8T6 | 72 | 64 | 20 | 48 | 32 | hdr |  |  | PC13 | 0.45x0.89x2.27 | 6 | BrBrd |
|**[Smart V2.0](https://github.com/OliviliK/STM32F103/wiki/F103C8)** | Unknown | $3.69  | STM32F103C8T6 | 72 | 64 | 20 | 48 | 33 | JTAG |  | PA0 | PC13 | 0.45x1.66x2.18 | 13 | DblBB |
|**[Demo Board](https://github.com/OliviliK/STM32F103/wiki/F103C8)** | Unknown | $4.37  | STM32F103C8T6 | 72 | 64 | 20 | 48 | 35 | JTAG | hdr |  | PC13 | 0.51x1.44x2.90 | 15 | DblBB |
|**[ME V5.02](https://github.com/OliviliK/STM32F103/wiki/F103C8)** | ME | $5.10  | STM32F103C8T6 | 72 | 64 | 20 | 48 | 35 | JTAG | hdr |  | PD2 | 0.46x1.78x2.47 | 18 | 4 holes |
|**[GD Red Pill](https://github.com/OliviliK/STM32F103/wiki/F103C8)** | Unknown | $5.10  | GD32F103C8T6 | 72, 96, 108, 120 | 64 | 20 | 48 | 30 | hdr |  |  |  | 0.72x1.00x2.44 | 8 | BrBrd |
|**[BTE14-07](https://github.com/OliviliK/STM32F103/wiki/F103CB)** | Baite | $4.00  | STM32F103CBT6 | 72 | 128 | 20 | 48 | 31 |  |  | PB8 | PB1 | 0.26x0.73x2.10 | 4 | BrBrd |
|**[LC Tech RB](https://github.com/OliviliK/STM32F103/wiki/F103RB)** | LC Technology | $9.88  | STM32F103RBT6 | 72 | 128 | 20 | 64 | 51 | JTAG | hdr |  |  | 0.47x1.41x2.28 | 15 |  |
|**[Nucleo-F103RB](https://github.com/OliviliK/STM32F103/wiki/F103RB)** | STM | $15.32  | STM32F103RBT6 | 72 | 128 | 20 | 64 | 51 | USB |  | PC13 | PA5 | 0.75x2.75x3.28 | 33 | 3 holes |
|**[MiniF103R](https://github.com/OliviliK/STM32F103/wiki/F103RB)** | Unknown | $12.57  | STM32F103RBT6 | 72 | 128 | 20 | 64 | 51 | JTAG | USB | PC0, PC1 |  | 0x92x2.67x3.65 | 38 | 4 holes |
|**[ME V1.02](https://github.com/OliviliK/STM32F103/wiki/F103RC)** | ME | $9.88  | STM32F103RCT6 | 72 | 128 | 20 | 64 | 53 | JTAG | hdr |  | PD2 | 0.46x1.97x2.76 | 22 | 4 holes |
|**[VCC-GND](https://github.com/OliviliK/STM32F103/wiki/F103VC)** | VCC-GND | $10.72  | STM32F103VCT6 | 72 | 256 | 48 | 100 | 80 | hdr |  |  | PB9 | 0x23x1.55x1.95 | 8 |  |
|**[ME F103/F407](https://github.com/OliviliK/STM32F103/wiki/F103VE)** | ME | $12.00  | STM32F103VET6 | 72 | 512 | 64 | 100 | 78 | hdr | hdr |  |  | 0.53x2.44x3.73 | 34 | 8 holes |
|**[LC Tech ZE](https://github.com/OliviliK/STM32F103/wiki/F103ZE)** | LC Technology | $12.99  | STM32F103ZET6 | 72 | 512 | 64 | 144 | 112 | JTAG | hdr |  |  | 0.47x1.95x2.91 | 26 | 4 holes |
|**[VCC-GND ZE](https://github.com/OliviliK/STM32F103/wiki/F103ZE)** | VCC-GND | $14.72  | STM32F103ZET6 | 72 | 512 | 64 | 144 | 112 | hdr |  |  |  | 0.44x1.86x2.38 | 12 |  |


  
  
