#include "mailun.h"
#include "pwm.h"

//��ǰ��PA8.PA9
//��ǰ��PA10,PA11
//�����PC6��PC7
//�Һ���PC8��PC9
void forward()
{
	TIM1_1PWM_Init(1999,719);
	TIM_SetCompare1(TIM1,1000);
	TIM1_2PWM_Init(1999,719); 
	TIM_SetCompare2(TIM1,0);
	//��ǰ����ת
	TIM1_3PWM_Init(1999,719); 
	TIM_SetCompare3(TIM1,1000);
	TIM1_4PWM_Init(1999,719); 
	TIM_SetCompare4(TIM1,0);
	//��ǰ����ת
	TIM8_1PWM_Init(1999,719); 
	TIM_SetCompare1(TIM8,1000);
	TIM8_2PWM_Init(1999,719); 
	TIM_SetCompare2(TIM8,0);
	//�������ת
	TIM8_3PWM_Init(1999,719); 
	TIM_SetCompare3(TIM8,1000);
	TIM8_4PWM_Init(1999,719); 
	IM_SetCompare4(TIM8,0);
	//�Һ�����ת
}

void backward()
{
	TIM1_1PWM_Init(1999,719);
	TIM_SetCompare1(TIM1,0);
	TIM1_2PWM_Init(1999,719); 
	TIM_SetCompare2(TIM1,1000);
	//��ǰ�ַ�ת
	TIM1_3PWM_Init(1999,719); 
	TIM_SetCompare3(TIM1,0);
	TIM1_4PWM_Init(1999,719); 
	TIM_SetCompare4(TIM1,1000);
	//��ǰ�ַ�ת
	TIM8_1PWM_Init(1999,719); 
	TIM_SetCompare1(TIM8,0);
	TIM8_2PWM_Init(1999,719); 
	TIM_SetCompare2(TIM8,1000);
	//����ַ�ת
	TIM8_3PWM_Init(1999,719); 
	TIM_SetCompare3(TIM8,0);
	TIM8_4PWM_Init(1999,719); 
	IM_SetCompare4(TIM8,1000);
	//�Һ��ַ�ת
}

void moveleft()
{
	//��ǰ�ַ�ת
	//��ǰ����ת
	//�������ת
	//�Һ��ַ�ת
}
void moveright()
{
	//��ǰ����ת
	//��ǰ�ַ�ת
	//����ַ�ת
	//�Һ�����ת
}

void turnleft()
{
	TIM1_1PWM_Init(1999,719);
	TIM_SetCompare1(TIM1,0);
	TIM1_2PWM_Init(1999,719); 
	TIM_SetCompare2(TIM1,1000);
	//��ǰ�ַ�ת
	TIM1_3PWM_Init(1999,719); 
	TIM_SetCompare3(TIM1,1000);
	TIM1_4PWM_Init(1999,719); 
	TIM_SetCompare4(TIM1,0);	
	//��ǰ����ת
	TIM8_1PWM_Init(1999,719); 
	TIM_SetCompare1(TIM8,0);
	TIM8_2PWM_Init(1999,719); 
	TIM_SetCompare2(TIM8,1000);
	//����ַ�ת
	TIM8_3PWM_Init(1999,719); 
	TIM_SetCompare3(TIM8,1000);
	TIM8_4PWM_Init(1999,719); 
	IM_SetCompare4(TIM8,0);
	//�Һ�����ת	
}

void turnright()
{
	TIM1_1PWM_Init(1999,719);
	TIM_SetCompare1(TIM1,1000);
	TIM1_2PWM_Init(1999,719); 
	TIM_SetCompare2(TIM1,0);
	//��ǰ����ת
	TIM1_3PWM_Init(1999,719); 
	TIM_SetCompare3(TIM1,0);
	TIM1_4PWM_Init(1999,719); 
	TIM_SetCompare4(TIM1,1000);
	//��ǰ�ַ�ת
	TIM8_1PWM_Init(1999,719); 
	TIM_SetCompare1(TIM8,1000);
	TIM8_2PWM_Init(1999,719); 
	TIM_SetCompare2(TIM8,0);
	//�������ת
	TIM8_3PWM_Init(1999,719); 
	TIM_SetCompare3(TIM8,0);
	TIM8_4PWM_Init(1999,719); 
	IM_SetCompare4(TIM8,1000);
	//�Һ��ַ�ת
}














