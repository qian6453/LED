/** 
 *  @file   main.c
 *  @brief  一个LED闪烁范例
 *  @par    Copyright (c):  
 *          南京工业大学自动化与电气工程学院
 *  @par    修改日志:
 *          版本        日期        作者        说明
 *          v1.1        2011-12-12  王晓荣    	
 */

#include "led.h"                  
#include "stm32f10x.h"                  // Device header


void Delay(unsigned int t);	

/**
 *  主程序 
 *  @param  None
 *  @return None
 */
int main(void)
{
    LED_Initialize();    	
    while(1)
    {
        LED_On(0);	
        Delay(5000000); 		
        LED_Off(0);	
        Delay(5000000); 
    }
}

/**
 *  延时程序 
 *  @param [in]	t  延时时间（循环次数）
 *  @return None
 */
void Delay(unsigned int t)
{ 
    while(t--) ;	
}
