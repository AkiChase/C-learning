#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func_08()
{
	//��Ŀ�����
	//���ʽ1?���ʽ2:���ʽ3
	int a = 10;
	int b = 20;
	int c;
	c = a > b ? a : b;
	printf("���ֵΪ%d\n", a > b ? a : b);

	printf("����score��");
	int score;
	scanf("%d", &score);
	if (score > 700)
	{
		printf(">700\n");
	}
	else if (score > 600)
	{
		printf(">600\n");
	}
	else
	{
		printf("no\n");
	}

	//switch ��� Ч�ʸ���if else ���
	switch (score/10) //�� int ���͵�
	{
	case 10:
	case 9:
	case 8:
		printf("����\n");
		break; //��û��break�������������
	case 7:
	case 6:
		printf("����\n");
		break;
	default: //���������ǰ��Ҫ��score��Χ�޶��ã�
		printf("������\n");
		break;
	} 

}