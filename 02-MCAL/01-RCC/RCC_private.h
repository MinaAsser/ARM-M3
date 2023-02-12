/*********************************************************************/
/******************************* Author : Mina Asser  ****************/
/******************************* Date   : 6 FEB 2023  ****************/
/******************************* VERSION: V01         ****************/
/******************************* swc : RCC ***************************/
/*********************************************************************/

#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H

/* Register definition */
/* based on the base address 0x4002 1000 as address = offset address + base address */
#define RCC_CR                    *((u32*)0x40021000) // Used To Choose Clock On Processor
#define RCC_CFGR                  *((u32*)0x40021004) // Used To Choose Clock On Processor
#define RCC_CIR                   *((u32*)0x40021008)
#define RCC_APB2RSTR              *((u32*)0x4002100C)
#define RCC_APB1RSTR              *((u32*)0x40021010)
#define RCC_AHBENR                *((u32*)0x40021014) //Enable and disable Clock on different prepheral on AHB
#define RCC_APB2ENR               *((u32*)0x40021018) //Enable and disable Clock on different prepheral ON APB2
#define RCC_APB1ENR               *((u32*)0x4002101C) //Enable and disable Clock on different prepheral ON APB1
#define RCC_BDCR                  *((u32*)0x40021020)
#define RCC_CSR                   *((u32*)0x40021024)

/* FOR RCC_CR REGISTER */

 #define PLLRDY       25   // read only flag if the clock is reached the multiplication factor is set 
 #define PLLON        24   // Set bit for PLL on CLR for PLL off     
 #define CSSON        19   // Clock security system Set for on CLR for Off 
 #define HSEBYP       18   // Set when RC is used and CLR when crystal is used
 #define HSERDY       17   // read only flag Set by hardware to indicate that the HSE oscillator is stable. 
 #define HSEON        16   // HSE high speed external clock is set when osci is ready 

 #define HSITRIM4     7   // Internal high-speed clock trimming   clr  
 #define HSITRIM3     6   // Internal high-speed clock trimming   Set
 #define HSITRIM2     5   // Internal high-speed clock trimming   clr
 #define HSITRIM1     4   // Internal high-speed clock trimming   clr
 #define HSITRIM0     3   // Internal high-speed clock trimming   clr
 #define HSIRDY       1   // read only Internal high-speed clock ready flag 
 #define HSION        0   //  Internal high-speed clock enable Set and cleared by software.


/* for RCC_CFGR   clock configuration Register */
/*
0xx: No clock
100: System clock (SYSCLK) selected
101: HSI clock selected
110: HSE clock selected
111: PLL clock divided by 2 selected
*/
#define MCO2         26   // Microcontroller output   
#define MCO1         25   // Microcontroller output 
#define MCO0         24   // Microcontroller output 


#define USBPRE       22   //Set and cleared by software to generate 48 MHz USB clock
/*
0000: PLL input clock x 2
0001: PLL input clock x 3
0010: PLL input clock x 4
0011: PLL input clock x 5
0100: PLL input clock x 6
0101: PLL input clock x 7
0110: PLL input clock x 8
0111: PLL input clock x 9
1000: PLL input clock x 10
1001: PLL input clock x 11
1010: PLL input clock x 12
1011: PLL input clock x 13
1100: PLL input clock x 14
1101: PLL input clock x 15
1110: PLL input clock x 16
1111: PLL input clock x 16



*/


#define PLLMUL3       21   // PLL  MULTIPLICATION FACTOR SELECTION
#define PLLMUL2       20   // PLL  MULTIPLICATION FACTOR SELECTION
#define PLLMUL1       19   // PLL  MULTIPLICATION FACTOR SELECTION
#define PLLMUL0       18   // PLL  MULTIPLICATION FACTOR SELECTION






#define PLLXTPRE      17 // 0: HSE clock not divided 1: HSE clock divided by 2
#define PLLSRC        16 // 0: HSI oscillator clock / 2 selected as PLL input clock 1: HSE oscillator clock selected as PLL input clock

#define ADCPRE1       15
#define ADCPRE0       14
#define PPRE2_2       13
#define PPRE2_1       12
#define PPRE2_0       11
#define PPRE1_2       10
#define PPRE1_1       9
#define PPRE1_0       8
#define HPRE_3        7
#define HPRE_2        6
#define HPRE_1        5
#define HPRE_0        4
//  System clock switch status
/*
00: HSI oscillator used as system clock
01: HSE oscillator used as system clock
10: PLL used as system clock
11: not applicable

*/

#define SWS1          3
#define SWS0          2
// System clock switch
/*
00: HSI selected as system clock
01: HSE selected as system clock
10: PLL selected as system clock
11: not allowed
*/
#define SW1           1 
#define SW0           0
 
 
 /*CLOCK TYPES */
 
/* Clock Types */
#define RCC_HSE_CRYSTAL      0
#define RCC_HSE_RC           1
#define RCC_HSI              2
#define RCC_PLL              3

/* PLL Options */
#define RCC_PLL_IN_HSI_DIV_2  0
#define RCC_PLL_IN_HSE_DIV_2  1
#define RCC_PLL_IN_HSE        2
 
 
 
#endif
