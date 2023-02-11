/*********************************************************************/
/******************************* Author : Mina Asser  ****************/
/******************************* Date   : 6 FEB 2023  ****************/
/******************************* VERSION: V01         ****************/
/******************************* swc : RCC ***************************/
/*********************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"


void RCC_voidInitSystemClock(void)
	{
#if     RCC_CLOCK_TYPE == RCC_HSE_CRYSTAL
	RCC_CR   = 0x00010000; // HSE IS SELECTED CRYSTAL IS USED
	  RCC_CFGR = 0x00000001;
	
	
	
	
	#elif RCC_CLOCK_TYPES == RCC_HSE_RC
	RCC_CR = 0x00050000 ; // HSE IS SELECTED RC IS USED
	RCC_CFGR =  0x00000001 ;                     

	
	
	#elif RCC_CLOCK_TYPES == RCC_HSI
	RCC_CR = 0x00000081 ; // HSI IS ENABLED WITH DEFAULT TRIMMING
    RCC_CFGR =  0x00000000 ;                     

	
	
	
	
	#elif RCC_CLOCK_TYPES == RCC_PLL
	     #if RCC_PLL_INPUT   == RCC_PLL_HSI_DIV_2
		 
	     #elif RCC_PLL_INPUT == RCC_PLL_HSE_DIV_2
		 
		 #elif RCC_PLL_INPUT == RCC_PLL_HSE
         #endif
	    
	#else 
	     #error("You choosed wrong clock type ");
	 
#endif	 
	
}
void RCC_voidEnableClock(u8 Copyu8BusId,u8 Copyu8PerId){
	if(Copyu8PerId <=31){
		switch(Copyu8BusId){
		case RCC_AHB  : SET_BIT(RCC_AHBENR,Copyu8PerId)	    ;	break;
		case RCC_APB1 : SET_BIT(RCC_APB1ENR,Copyu8PerId)	;   break;
		case RCC_APB2 : SET_BIT(RCC_APB1ENR,Copyu8PerId)	;   break;
      //  default : /*return error*/ ;
	
		}
	}
   else	{
		
		// Return Error
		
		
	
	}
}
void RCC_voidDisableClock(u8 Copyu8BusId,u8 Copyu8PerId){
	if(Copyu8PerId <=31){
		switch(Copyu8BusId){
		case RCC_AHB  : CLR_BIT(RCC_AHBENR,Copyu8PerId)	    ;	break;
		case RCC_APB1 : CLR_BIT(RCC_APB1ENR,Copyu8PerId)	;   break;
		case RCC_APB2 : CLR_BIT(RCC_APB1ENR,Copyu8PerId)	;   break;
      //  default : /*return error*/ ;
	
		}
	}
   else	{
		
		// Return Error
		
		
	
	}
}


