#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void func_15()
{
	//��stdlibͷ�ļ�
	//atoi (auto to int)

	//ֻ��ʶ��10���Ƶ����� 0xʲô�Ĳ���

	//ֻ����������ͷ�Ŀո�ֱ�����������Ż����ֲſ�ʼת��
	//�����������ֻ�\0ֹͣת��
	//ʧ�ܷ���0
	
	char ch[] = "   -11aaa";
	printf("%d\n", atoi(ch));


	//atof ת��Ϊdouble
	char ch2[] = "   -123.123123123123123123aaa";
	double f = atof(ch2);
	printf("%.2f\n", atof(ch2));


	//atol ת��Ϊlong ����int
}