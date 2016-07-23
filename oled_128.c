/*
 * oled_128.c
 *
 * Created: 2016/7/20 23:28:33
 * Author : XU
 */ 

#include <avr/io.h>
#ifndef __OLED_H
#define __OLED_H

#define  u8 unsigned char
#define  u32 unsigned int
#define OLED_CMD  0	//写命令
#define OLED_DATA 1	//写数据
#define OLED_MODE 0

#define OLED_CS_Set()  PORTF|=1<<PF5;
#define OLED_CS_Clr()  PORTF&=~(1<<PF5);

#define OLED_RST_Set() PORTF|=1<<PF4;
#define OLED_RST_Clr() PORTF&=~(1<<PF4);

#define OLED_DC_Set() PORTF|=1<<PF3;
#define OLED_DC_Clr() PORTF&=~(1<<PF3);

#define OLED_SCLK_Set() PORTF|=1<<PF6;
#define OLED_SCLK_Clr() PORTF&=~(1<<PF6);

#define OLED_SDIN_Set() PORTF|=1<<PF2;
#define OLED_SDIN_Clr() PORTF&=~(1<<PF2);

//OLED模式设置
//0:4线串行模式
//1:并行8080模式

#define SIZE 16
#define XLevelL		0x02
#define XLevelH		0x10
#define Max_Column	128
#define Max_Row		64
#define	Brightness	0xFF
#define X_WIDTH 	128
#define Y_WIDTH 	64

void OLED_WR_Byte(unsigned char dat ,unsigned char cmd);
void OLED_Display_On(void);
void OLED_Display_Off(void);
void OLED_Init(void);
void OLED_Clear(void);
void OLED_DrawPoint(unsigned char x,unsigned char y,unsigned char t);
void OLED_Fill(unsigned char x1,unsigned char y1,unsigned char x2,unsigned char y2,unsigned char dot);
void OLED_ShowChar(unsigned char x,unsigned char y,unsigned char chr);
void OLED_ShowNum(unsigned char x,unsigned char y,unsigned int num,unsigned char len,unsigned char size2);
void OLED_ShowString(unsigned char x,unsigned char y,char *p);
void OLED_Set_Pos(unsigned char x, unsigned char y);
void OLED_ShowCHinese(unsigned char x,unsigned char y,unsigned char no);
void OLED_DrawBMP(unsigned char x0, unsigned char y0,unsigned char x1, unsigned char y1,const unsigned char BMP[]);
/* Replace with your library code */

#endif


