#include "led.h"
#include "delay.h"
#include "sys.h"
#include "io.h"
/************************************************
 ALIENTEKս��STM32������ʵ��3
 ��������ʵ��  
 ����֧�֣�www.openedv.com
 �Ա����̣�http://eboard.taobao.com 
 ��ע΢�Ź���ƽ̨΢�źţ�"����ԭ��"����ѻ�ȡSTM32���ϡ�
 ������������ӿƼ����޹�˾  
 ���ߣ�����ԭ�� @ALIENTEK
************************************************/


 int main(void)
 {
	delay_init();	    	 //��ʱ������ʼ��	  
 	LED_Init();			     //LED�˿ڳ�ʼ��
	// LED=0;					//�ȵ������
	 	io_Init();           //��ʼ�����io��

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

