#include "control.h"
#include "delay.h"
char feedback[24];//���ⲿ���һ����������
//char control_array[16];//����һ���������


void exfeedback(void)//��ȡ8·���ŵķ����źŵ�feedback��1���źţ�0���źţ�
{		
	u8 j=0;
	 OE8=0;//�򿪿��ƶ�
	if(B0==0||B1==0||B2==0||B3==0||B4==0||B5==0||B6==0||B7==0)//�����ж��Ƿ��з���
	{
		delay_ms(8);
		
		if(B0==0)//��һ����λ
		{
			feedback[0]=1;
//			D0=1;//�Ͽ��ź�
//			LE7=1;
//			LE7=0;
		}
		else 
			feedback[0]=0;
		
		if(B1==0)//��һ�ص�λ
		{
			feedback[1]=1;
//			D1=1;//�Ͽ��ź�
//			LE7=1;
//			LE7=0;
		}
		else 
			feedback[1]=0;
		if(B2==0)//��һ����
			feedback[2]=1;
		else 
			feedback[2]=0;
		
		if(B3==0)//��������λ
		{
			feedback[3]=1;
//			LE7=1;
//			D2=1;//�Ͽ��ź�
//			LE7=0;
		}
		else 
			feedback[3]=0;
		if(B4==0)//�����ص�λ
		{
			feedback[4]=1;
//			LE7=1;
//			D3=1;//�Ͽ��ź�
//			LE7=0;
		}
		else 
			feedback[4]=0;
		if(B5==0)//��������
			feedback[5]=1;
		else 
			feedback[5]=0;
		if(B6==0)//��������λ
		{
			feedback[6]=1;
//			LE7=1;
//			D4=1;//�Ͽ��ź�
//			LE7=0;
		}
		else 
			feedback[6]=0;
		if(B7==0)//�����ص�λ
		{
			feedback[7]=1;
//			LE7=1;
//			D5=1;//�Ͽ��ź�
//			LE7=0;
		}
		else 
			feedback[7]=0;
	}
		else
		{
			for(j=0;j<8;j++)
		feedback[j]=0;
		}
   OE8=1;	

		
	OE6=0;//�򿪿��ƶ�
	if(B0==0||B1==0||B2==0||B3==0||B4==0||B5==0||B6==0||B7==0)//�����ж��Ƿ��з���
	{
		delay_ms(8);
		if(B0==0)//��������
			feedback[8]=1;
		else 
			feedback[8]=0;
		if(B1==0)//���Ŀ���λ
		{
			feedback[9]=1;
//			LE7=1;
//			D6=1;//�Ͽ��ź�
//			LE7=0;
		}
		else 
			feedback[9]=0;
		if(B2==0)//���Ĺص�λ
		{
			feedback[10]=1;
//			LE7=1;
//			D7=1;//�Ͽ��ź�
//			LE7=0;
		}
		else 
			feedback[10]=0;
		if(B3==0)//���Ĺ���
			feedback[11]=1;
		else 
			feedback[11]=0;
		if(B4==0)//���忪��λ
		{
			feedback[12]=1;
//			LE8=1;
//			D0=1;//�Ͽ��ź�
//			LE8=0;
		}
		else 
			feedback[12]=0;
		if(B5==0)//����ص�λ
		{
			feedback[13]=1;
//			LE8=1;
//			D1=1;//�Ͽ��ź�
//			LE8=0;
		}
		else 
			feedback[13]=0;
		if(B6==0)//�������
			feedback[14]=1;
		else 
			feedback[14]=0;
		if(B7==0)//��������λ
		{
			feedback[15]=1;
//			LE8=1;
//			D2=1;//�Ͽ��ź�
//			LE8=0;
		}
		else 
			feedback[15]=0;
	}
    else
		{
		for(j=0;j<8;j++)
		feedback[j+8]=0;
		}
	OE6=1;	
	
	
	
		OE7=0;//�򿪿��ƶ�
	if(B0==0||B1==0||B2==0||B3==0||B4==0||B5==0||B6==0||B7==0)//�����ж��Ƿ��з���
	{
		delay_ms(8);
		if(B0==0)//�����ص�λ
		{
			feedback[16]=1;
//			LE8=1;
//			D3=1;//�Ͽ��ź�
//			LE8=0;
		}
		else 
			feedback[17]=0;
		if(B1==0)//��������
			feedback[17]=1;
		else 
			feedback[17]=0;
		if(B2==0)//���߿���λ
		{
			feedback[18]=1;
//			LE8=1;
//			D4=1;//�Ͽ��ź�
//			LE8=0;
		}
		else 
			feedback[18]=0;
		if(B3==0)//���߹ص�λ
		{
			feedback[19]=1;
//			LE8=1;
//			D5=1;//�Ͽ��ź�
//			LE8=0;
		}
		else 
			feedback[19]=0;
		if(B4==0)//���߹���
			feedback[20]=1;
		else 
			feedback[20]=0;
		if(B5==0)//���˿���λ
		{
			feedback[21]=1;
//			LE8=1;
//			D6=1;//�Ͽ��ź�
//			LE8=0;
		}
		else 
			feedback[21]=0;
		if(B6==0)//���˹ص�λ
		{
			feedback[22]=1;
//			LE8=1;
//			D7=1;//�Ͽ��ź�
//			LE8=0;
		}
		else 
			feedback[22]=0;
		if(B7==0)//���˹���
			feedback[23]=1;
		else 
			feedback[23]=0;
	}
    else
		{
		for(j=0;j<8;j++)
		feedback[j+16]=0;
		}
		    OE7=1;	
}

void outputcontrol(u8 i)//����8·���ſ����
{
	if(i)
	{
			switch(i)
		{
			case s1open:
				LE7=0;
				D0=0;
				LE7=1;
				break;
			case s1close:
				LE7=0;
				D1=0;
				LE7=1;
				break;
			case s2open:
				LE7=0;
				D2=0;
				LE7=1;
				break;
			case s2close:
				LE7=0;
				D3=0;
				LE7=1;
				break;
			case s3open:
				LE7=0;
				D4=0;
				LE7=1;
				break;
			case s3close:
				LE7=0;
				D5=0;
			LE7=1;
				break;
			case s4open:
				LE7=0;
				D6=0;
				LE7=1;
				break;
			case s4close:
				LE7=0;
				D7=0;
			LE7=1;
				break;
			case s5open:
				LE8=0;
				D0=0;
			 LE8=1;
				break;
			case s5close:
				LE8=0;
				D1=0;
				LE8=1;
				break;
			case s6open:
				LE8=0;
				D2=0;
			LE8=1;
				break;
			case s6close:
				LE8=0;
				D3=0;
				LE8=1;
				break;
			case s7open:
				LE8=0;
				D4=0;
				LE8=1;
				break;
			case s7close:
				LE8=0;
				D5=0;
				LE8=1;
				break;
			case s8open:
				LE8=0;
				D6=0;
				LE8=1;
				break;
			case s8close:
				LE8=0;
				D7=0;
			  LE8=1;
				break;		
		}
	}
	else delay_ms(10); 
}

u8 module_input(void)//���ⲿ��ȡģ�鰴���������������������
{		
		static u8 flag_scan1=1;
		static u8 flag_scan2=1;
	  OE3=0;
		if(flag_scan1&&(B0==0||B1==0||B2==0||B3==0||B4==0||B5==0||B6==0||B7==0))
	{
		delay_ms(8);
		flag_scan1=0;
		if(B0==0)
		return s1open;
		if(B1==0)
		return s1close;
		if(B2==0)
		return s2open;
		if(B3==0)
		return s2close;
		if(B4==0)
		return s3open;
		if(B5==0)
		return s3close;
		if(B6==0)
		return s4open;
		if(B7==0)
		return s4close;
	}
	else if(B0==1&&B1==1&&B2==1&&B3==1&&B4==1&&B5==1&&B6==1&&B7==1)
		flag_scan1=0;
    OE3=1;	
	
		OE4=0;
		if(flag_scan2&&(B0==0||B1==0||B2==0||B3==0||B4==0||B5==0||B6==0||B7==0))
	{
		delay_ms(8);
		flag_scan2=0;
		if(B0==0)
		return s5open;
		if(B1==0)
		return s5close;
		if(B2==0)
		return s6open;
		if(B3==0)
		return s6close;
		if(B4==0)
		return s7open;
		if(B5==0)
		return s7close;
		if(B6==0)
		return s8open;
		if(B7==0)
		return s8close;
	}
		else if(B0==1&&B1==1&&B2==1&&B3==1&&B4==1&&B5==1&&B6==1&&B7==1)
		flag_scan2=0;
    OE4=1;	
	return 0;
}

void module_indication(void)//ģ����ʾ�����ź�feedback����
{

	D0=feedback[0];
	D1=feedback[1];
	D2=feedback[2];
	D3=feedback[3];
	D4=feedback[4];
	D5=feedback[5];
	D6=feedback[6];
	D7=feedback[7];
	LE4=1;
	LE4=0;
	 
	D0=feedback[8];
	D1=feedback[9];
	D2=feedback[10];
	D3=feedback[11];
	D4=feedback[12];
	D5=feedback[13];
	D6=feedback[14];
	D7=feedback[15];
	LE5=1;
	LE5=0;
	
	D0=feedback[16];
	D1=feedback[17];
	D2=feedback[18];
	D3=feedback[19];
	D4=feedback[20];
	D5=feedback[21];
	D6=feedback[22];
	D7=feedback[23];
  LE6=1;
	LE6=0;
	
}


