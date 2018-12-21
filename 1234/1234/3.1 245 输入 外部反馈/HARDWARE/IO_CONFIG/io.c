#include "io.h"
#include "stm32f10x.h"
//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//ALIENTEKս��STM32������
//LED��������	   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//�޸�����:2012/9/2
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) ������������ӿƼ����޹�˾ 2009-2019
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 	   

//��ʼ��PB5��PE5Ϊ�����.��ʹ���������ڵ�ʱ��		    
//LED IO��ʼ��
void io_Init(void)
{ 
 GPIO_InitTypeDef  GPIO_InitStructure;//����һ���ṹ��
 	RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO|RCC_APB2Periph_GPIOD|RCC_APB2Periph_GPIOA|RCC_APB2Periph_GPIOB|RCC_APB2Periph_GPIOC|RCC_APB2Periph_GPIOE, ENABLE);	 //ʹ��PA��B.C.D��E�˿�ʱ��	
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO���ٶ�Ϊ50MHz
GPIO_PinRemapConfig(GPIO_Remap_SWJ_JTAGDisable,ENABLE);//B3,B4Ĭ��JTAG �踴��
/**********
573D0-D7��io������:D0-PD15  D1-PD14  D2-PD13  D3-PD12  D4-PD11  D5-PD10  D6-PD9  D7-PD8
***********/
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8|GPIO_Pin_9|GPIO_Pin_10|GPIO_Pin_11|GPIO_Pin_12|GPIO_Pin_13|GPIO_Pin_14|GPIO_Pin_15;			
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //�������
 GPIO_Init(GPIOD, &GPIO_InitStructure);	
 GPIO_SetBits(GPIOD,GPIO_Pin_8|GPIO_Pin_9|GPIO_Pin_10|GPIO_Pin_11|GPIO_Pin_12|GPIO_Pin_13|GPIO_Pin_14|GPIO_Pin_15);//Ĭ�ϸߵ�ƽ�����1�����Ƶ��𣬸�0�����Ե���

/************
245B0-B7��io������:B0-PD7  B1-PD6  B2-PD5  B3-PD4  B4-PD3  B5-PD2  B6-PD1  B7-PD0
**************/
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_6|GPIO_Pin_7;			
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 //��������
 GPIO_Init(GPIOD, &GPIO_InitStructure);					 //�����趨������ʼ

/******************
245,573�˿ڿ���io������
*******************/
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2|GPIO_Pin_5|GPIO_Pin_6|GPIO_Pin_7;	
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //�������
 GPIO_Init(GPIOA, &GPIO_InitStructure);	
 GPIO_ResetBits(GPIOA,GPIO_Pin_2|GPIO_Pin_5|GPIO_Pin_7);//A2-SOUND,A5-LE1.A6-OE2,A7-LE2
 GPIO_SetBits(GPIOA,GPIO_Pin_6);
	
 GPIO_InitStructure.GPIO_Pin =GPIO_Pin_3|GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_6|GPIO_Pin_7|GPIO_Pin_8|GPIO_Pin_9;			
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //�������
 GPIO_Init(GPIOB, &GPIO_InitStructure);	//B4-LE3,B3-LE7,B5-OE9,B6-LE8,B7-OE11,B8-OE10,B9-OE12,
 GPIO_SetBits(GPIOB,GPIO_Pin_4|GPIO_Pin_6|GPIO_Pin_5|GPIO_Pin_7|GPIO_Pin_8|GPIO_Pin_9);//
  GPIO_ResetBits(GPIOB,GPIO_Pin_3);
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4;	
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //�������
 GPIO_Init(GPIOC, &GPIO_InitStructure);//C0-OE7,C1-OE6,C2-OE5,C3-OE8
 GPIO_SetBits(GPIOC,GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4);
 
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4|GPIO_Pin_9|GPIO_Pin_10|GPIO_Pin_11;			
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //�������
 GPIO_Init(GPIOE, &GPIO_InitStructure);	//E2-OE3,E3-OE4,E4-OE13,E9-LE6,E10-LE5,E11-LE4
 GPIO_ResetBits(GPIOE,GPIO_Pin_11|GPIO_Pin_10|GPIO_Pin_9);
 GPIO_SetBits(GPIOE,GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4); 
	/***************
	�ϵ��ʹ���Ե���
	**************/
	OE1=1;
	OE2=1;
	OE3=1;
	OE4=1;
	OE5=1;
	OE6=1;
	OE7=1;
	OE8=1;
	OE9=1;
	OE10=1;
	OE11=1;
	OE12=1;
	OE13=1;


  GPIO_ResetBits(GPIOD,GPIO_Pin_8|GPIO_Pin_9|GPIO_Pin_10|GPIO_Pin_11|GPIO_Pin_12|GPIO_Pin_13|GPIO_Pin_14|GPIO_Pin_15);//di
	LE4=1;
	LE5=1;
	LE6=1;
	LE4=0;
	LE5=0;
	LE6=0;
	
	GPIO_SetBits(GPIOD,GPIO_Pin_8|GPIO_Pin_9|GPIO_Pin_10|GPIO_Pin_11|GPIO_Pin_12|GPIO_Pin_13|GPIO_Pin_14|GPIO_Pin_15);//Ĭ�ϵ�ƽ
	 LE1=1;
   LE2=1;
	 LE3=1;
	 LE7=1;
	 LE8=1;
	 LE1=0;
   LE2=0;
	 LE3=0;
	 LE7=0;
	 LE8=0;
}
 
