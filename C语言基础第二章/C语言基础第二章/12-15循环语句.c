#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

void func_12() {
	int i = 1;

	while (i < 10)
	{
		printf("%d\n", i++);
	}

	printf("do while ���\n");
	i = 0;
	do
	{
		printf("%d\n", i++);
		i--;
	} while (i); //��ִ��int i ��������0Ϊֹ



	printf("for ѭ��\n");

	//����int t=0;��ǰ���ж���
	int j = 5;
	//1     2				3
	for (i = 0; i < 10, j <= 10; i++)
	{
		j += 5;
		//2Ҫ��������������
		printf("%d\n", i); //4��˳��ִ��
	}
	//������䶼��ʡ��

	i = 0;
	for (;;) //����ѭ��
	{
		i++;
		printf("%d\n", i);
		if (i >= 5)
		{
			break;
		}
	}


	printf("�����\n");
	//���������
	/*
	1.���� time.h stdlib.h
	2.�����������ӣ����ܵõ���һ�����������
	3.��ȡ�����
	*/

	//2
	srand((unsigned int)time(NULL)); //�������

	int value = rand(); //0 - RAND_MAX�������
	value % 10; //���Եõ�0-9�������(%100��0-99)
	printf("%d\n", value);

	Sleep(1000); //950ms ����window.h
	system("cls"); //����
}
