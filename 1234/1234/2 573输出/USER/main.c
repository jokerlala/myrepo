#include "led.h"
#include "delay.h"
#include "sys.h"
#include "io.h"
/************************************************
 ALIENTEK战舰STM32开发板实验3
 按键输入实验  
 技术支持：www.openedv.com
 淘宝店铺：http://eboard.taobao.com 
 关注微信公众平台微信号："正点原子"，免费获取STM32资料。
 广州市星翼电子科技有限公司  
 作者：正点原子 @ALIENTEK
************************************************/


 int main(void)
 {
	delay_init();	    	 //延时函数初始化	  
 	LED_Init();			     //LED端口初始化
	// LED=0;					//先点亮红灯
	 	io_Init();           //初始化相关io口

	while(1)
	{

//	 	LE8=0;

 GPIO_ResetBits(GPIOD,GPIO_Pin_8|GPIO_Pin_9|GPIO_Pin_10|GPIO_Pin_11|GPIO_Pin_12|GPIO_Pin_13|GPIO_Pin_14|GPIO_Pin_15);//di
//		LE1=1;
//		LE2=1;
		LE3=1;
//		LE4=1;
//	LE5=1;
//	LE6=1;
//		LE7=1;
//		LE8=1;
//		
//		LE1=0;
//		LE2=0;
//		LE3=0;
//		LE4=0;
//		LE5=0;
//		LE6=0;
//		LE7=0;
//	LE8=0;
//	delay_ms(1500);
	
//	 GPIO_SetBits(GPIOD,GPIO_Pin_8|GPIO_Pin_9|GPIO_Pin_10|GPIO_Pin_11|GPIO_Pin_12|GPIO_Pin_13|GPIO_Pin_14|GPIO_Pin_15);//di
//		LE1=1;
//		LE2=1;
//		LE3=1;
//		LE4=1;
//		LE5=1;
//		LE6=1;
//		LE7=1;
//		LE8=1;
		
//		LE1=0;
//		LE2=0;
//		LE3=0;
//		LE4=0;
//		LE5=0;
//   	LE6=0;
//		LE7=0;
//		LE8=0;
	delay_ms(1500);


}	 
}

