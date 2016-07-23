# ATmega128_SSD1306_SWSPI

在ATmel studio7.0环境下开发的适用于ATmega128的OLED驱动。

OLED的驱动芯片：SSD1306
；
尺寸：0.96寸；

驱动方式：软件SPI；

输入电压2.8V~5.5V。

功能函数：

void OLED_WR_Byte(unsigned char dat ,unsigned char cmd); //写数据/控制字

void OLED_Display_On(void);  //开显示

void OLED_Display_Off(void);  //关显示

void OLED_Init(void);  //初始化

void OLED_Clear(void);  //清屏

void OLED_DrawPoint(unsigned char x,unsigned char y,unsigned char t);  //绘点

void OLED_Fill(unsigned char x1,unsigned char y1,unsigned char x2,unsigned char y2,unsigned char dot);  //填充

void OLED_ShowChar(unsigned char x,unsigned char y,unsigned char chr);  //显示字符

void OLED_ShowNum(unsigned char x,unsigned char y,unsigned int num,unsigned char len,unsigned char size2);  //显示数字

void OLED_ShowString(unsigned char x,unsigned char y,char *p);  //显示字符串

void OLED_Set_Pos(unsigned char x, unsigned char y); 

void OLED_ShowCHinese(unsigned char x,unsigned char y,unsigned char no);  //显示中文

void OLED_DrawBMP(unsigned char x0, unsigned char y0,unsigned char x1, unsigned char y1,const unsigned char BMP[]);  //显示BMP图

At last, thanks to my best friends, zhenguo and shaomin.

Good Good Study, Day Day Up.
