#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func_08()
{
	int a = 10;
	printf("%p\n", &a);

	//����ָ֤�������������ַ
	//����* ��[ = &����];
	int* p = &a;
	printf("%p\n", p);
	printf("%d\n", a);

	//*ָ����� ��ʾָ���Ӧ����
	//* ȡֵ�����
	*p = 100; //����޸�a��ֵ
	printf("%d\n", *p);
	printf("%d\n", a);

	//��Ϊ��ַ���޷���16��������
	//����ָ�����ʹ�С ��32λ����4 64λ����8
	printf("ָ��Ĵ�С%d\n", sizeof(char*));

}

