#include "led.h"
#include "delay.h"
#include "sys.h"
#include "timer.h"
#include "usart.h"
#include "can.h"
//ALIENTEKս��STM32������ʵ��1
//�����ʵ��  
//����֧�֣�www.openedv.com
//������������ӿƼ����޹�˾
 u8 key;
 int main(void)
 {	
	u8 res;
	u8 i;
  u8 cnt=0;
	 
 	u8 t;
	u8 len;	
	
	u8 canbuf[8]={0X01,0X02,0X03,0X04,0X05,0X06,0X07,0X08};
	delay_init();	    	 //��ʱ������ʼ��	  
	LED_Init();		  	//��ʼ����LED���ӵ�Ӳ���ӿ�
//	TIM3_Int_Init(9999,7199); //10Khz�ļ���Ƶ�ʣ�������5000Ϊ500ms
	NVIC_Configuration(); 	 //����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�
	uart_init(9600);//����1��ʼ��
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_CAN1, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_CAN2, ENABLE);
	CAN_Mode_Init(CAN_SJW_1tq,CAN_BS2_8tq,CAN_BS1_9tq,8,0);//CAN��ʼ������ģʽ,������50Kbps    
	CAN2_Mode_Init(CAN_SJW_1tq,CAN_BS2_8tq,CAN_BS1_9tq,8,0);//CAN��ʼ������ģʽ,������50Kbps 
	 

while(1)
{

			res=Can_Send_Msg(canbuf,4);//����8���ֽ�
		  delay_ms(1500);
			res=Can2_Send_Msg(canbuf,8);//����8���ֽ�
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
//	printf("����");
}
 
 }



