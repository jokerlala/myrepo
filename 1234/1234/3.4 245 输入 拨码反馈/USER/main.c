#include "led.h"
#include "delay.h"
#include "control.h"
#include "io.h"
#include "sys.h"
#include "usart.h"	
/************************************************
 ALIENTEKս��STM32������ʵ��3
 ��������ʵ��  
 ����֧�֣�www.openedv.com
 �Ա����̣�http://eboard.taobao.com 
 ��ע΢�Ź���ƽ̨΢�źţ�"����ԭ��"����ѻ�ȡSTM32���ϡ�
 ������������ӿƼ����޹�˾  
 ���ߣ�����ԭ�� @ALIENTEK
************************************************/

 extern char feedback[24];//���ⲿ���һ����������

 int main(void)
 {
	u8 value1,value2,value3;
	u8 i;
	delay_init();	    	 //��ʱ������ʼ��	 
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�
  uart_init(9600);	 //���ڳ�ʼ��Ϊ115200	 
 	LED_Init();			     //LED�˿ڳ�ʼ��
	io_Init();           //��ʼ�����io��
	LED=0;					     //�ȵ������
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
	printf("\r\n�ⲿ״̬����\r\n\r\n");
	while(1)
	{
//		value1=PDin(5);
//		value2=PDin(6);
//		value3=PDin(7);
		//outputcontrol(value);//�����״̬���ݸ���Ƭ������Ƭ�����Ƽ̵�������
		exfeedback();//����·���ŵķ����ź�
		//module_indication();//��8·���ŵķ����ź�ͨ��led��ʾ
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

