#include "led.h"
#include "delay.h"
#include "key.h"
#include "sys.h"
#include "beep.h"
 
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
 	u8 key=0;	
	delay_init();	    	 //��ʱ������ʼ��	  
 	LED_Init();			     //LED�˿ڳ�ʼ��
//	KEY_Init();          //��ʼ���밴�����ӵ�Ӳ���ӿ�
//	BEEP_Init();         	//��ʼ���������˿�
	 LED=0;					//�ȵ������
	while(1)
	{
		 LED=0;					//�ȵ������
		delay_ms(1000);
				 LED=1;					//�ȵ������
		delay_ms(1000);
// 		key=KEY_Scan(0);	//�õ���ֵ
//	   	if(key)
//		{						   
//			switch(key)
//			{				 
//				case WKUP_PRES:	//���Ʒ�����
////			while(1)
////				{       LED0=!LED0;
////						LED1=!LED1;
////						delay_ms(500);
////						LED1=!LED1;
////						LED0=!LED0;
////						delay_ms(500);}
//			
//					//break;
//				case KEY2_PRES:	//����LED0��ת
//					LED0=!LED0;
//					break;
//				case KEY1_PRES:	//����LED1��ת	 
//					LED1=!LED1;
//					break;
//				case KEY0_PRES:	//ͬʱ����LED0,LED1��ת 
//					LED0=!LED0;
//					LED1=!LED1;
//					break;
//			}
//		}else delay_ms(10); 
	}	 
}

