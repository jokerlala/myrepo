#include "led.h"
#include "delay.h"
#include "sys.h"
#include "timer.h"
#include "usart.h"
#include "can.h"
//ALIENTEK战舰STM32开发板实验1
//跑马灯实验  
//技术支持：www.openedv.com
//广州市星翼电子科技有限公司
 u8 key;
 int main(void)
 {	
	u8 res;
	u8 i;
  u8 cnt=0;
	 
 	u8 t;
	u8 len;	
	
	u8 canbuf[8]={0X01,0X02,0X03,0X04,0X05,0X06,0X07,0X08};
	delay_init();	    	 //延时函数初始化	  
	LED_Init();		  	//初始化与LED连接的硬件接口
//	TIM3_Int_Init(9999,7199); //10Khz的计数频率，计数到5000为500ms
	NVIC_Configuration(); 	 //设置NVIC中断分组2:2位抢占优先级，2位响应优先级
	uart_init(9600);//串口1初始化
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_CAN1, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_CAN2, ENABLE);
	CAN_Mode_Init(CAN_SJW_1tq,CAN_BS2_8tq,CAN_BS1_9tq,8,0);//CAN初始化环回模式,波特率50Kbps    
	CAN2_Mode_Init(CAN_SJW_1tq,CAN_BS2_8tq,CAN_BS1_9tq,8,0);//CAN初始化环回模式,波特率50Kbps 
	 

while(1)
{

			res=Can_Send_Msg(canbuf,4);//发送8个字节
		  delay_ms(1500);
			res=Can2_Send_Msg(canbuf,8);//发送8个字节
		  delay_ms(1500);
	
		//	cnt++;
			
			
	// 	key=CAN_MessagePending(CAN2,CAN_FIFO0);

//			key=Can_Receive_Msg(canbuf);
//			
			
//			if(key)
//			{
//			LED=1;
//			delay_ms(500);
//			LED=0;
//      delay_ms(500);
//			}
//  LED=1;
// delay_ms(1500);
//	printf("进入");
}
 
 }



