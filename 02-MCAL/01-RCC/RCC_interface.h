/*********************************************************************/
/******************************* Author : Mina Asser  ****************/
/******************************* Date   : 6 FEB 2023  ****************/
/******************************* VERSION: V01         ****************/
/******************************* swc : RCC ***************************/
/*********************************************************************/

#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H
 /* PERIPHERAL MACROS */
 #define RCC_AHB         0
 #define RCC_APB1        1
 #define RCC_APB2        2
void RCC_voidInitSysClock();
void RCC_voidEnableClock(u8 Copyu8BusId,u8 Copyu8PerId);
void RCC_voidDisableClock(u8 Copyu8BusId,u8 Copyu8PerId);




#endif
