#include "led.h"
#include "delay.h"
#include "control.h"
#include "io.h"
#include "sys.h"
#include "usart.h"	
/************************************************
 ALIENTEK战舰STM32开发板实验3
 按键输入实验  
 技术支持：www.openedv.com
 淘宝店铺：http://eboard.taobao.com 
 关注微信公众平台微信号："正点原子"，免费获取STM32资料。
 广州市星翼电子科技有限公司  
 作者：正点原子 @ALIENTEK
************************************************/

 extern char feedback[24];//从外部获得一个输入数组

 int main(void)
 {
	u8 value1,value2,value3;
	u8 i;
	delay_init();	    	 //延时函数初始化	 
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //设置NVIC中断分组2:2位抢占优先级，2位响应优先级
  uart_init(9600);	 //串口初始化为115200	 
 	LED_Init();			     //LED端口初始化
	io_Init();           //初始化相关io口
	LED=0;					     //先点亮红灯
	 OE1=1;
//	 OE2=1;
//	 OE3=1;
//	 OE4=1;
//	 OE5=1;
//	 OE6=1;
//	 OE7=1;
//	 OE8=1;
//	 OE9=1;
//	 OE10=1;
//	 OE11=1;
//	 OE12=1;
//	 OE13=1;
//	
	printf("\r\n外部状态捕获\r\n\r\n");
	while(1)
	{
//		value1=PDin(5);
//		value2=PDin(6);
//		value3=PDin(7);
		//outputcontrol(value);//将检测状态传递给单片机，单片机控制继电器工作
		exfeedback();//检测八路阀门的反馈信号
		//module_indication();//将8路阀门的反馈信号通过led显示
	//	printf("B0=%d,B1=%d,B2=%d\r\n",value3,value2,value1);
		for(i=0;i<24;i++)
		{
			printf("D%d=%d\t",i,feedback[i]);
			if((i+1)%8==0)
			printf("\r\n");
		}
		printf("\r\n");
		delay_ms(1500);
	}	 
}

