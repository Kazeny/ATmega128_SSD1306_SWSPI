/*
 * main.c
 *
 * Created: 2016/7/21 22:48:41
 *  Author: XU
 */ 
#include <avr/io.h>
#include <util/delay.h>
#include <avr/pgmspace.h>
#include "oled.h"
#include "bmp.h"

int main(void)
 {		u8 t;
		OLED_Init();			//初始化OLED  
		OLED_Clear(); 
		t=' ';
	while(1) 
	{		
		
		OLED_Clear();
		OLED_ShowCHinese(0,0,0);
		OLED_ShowCHinese(18,0,1);
		OLED_ShowCHinese(36,0,2);
		OLED_ShowCHinese(54,0,3);
		OLED_ShowCHinese(72,0,4);
		OLED_ShowCHinese(90,0,5);
		OLED_ShowCHinese(108,0,6);
		OLED_ShowString(0,2,"0.96' OLED TEST"); 
	 	OLED_ShowString(20,4,"2016/07/23");  
		OLED_ShowString(0,6,"ASCII:");  
		OLED_ShowString(63,6,"CODE:");  
		OLED_ShowChar(48,6,t);//显示ASCII字符	   
		t++;
		if(t>'~')t=' ';
		OLED_ShowNum(103,6,t,3,16);//显示ASCII字符的码值 	
			
		
		_delay_ms(500);
		
		OLED_Clear();
		_delay_ms(500);
		OLED_DrawBMP(0,0,128,8,BMP1);  //图片显示
		_delay_ms(500);
		OLED_DrawBMP(0,0,128,8,BMP3);
		_delay_ms(500);
	}	  
	
}
