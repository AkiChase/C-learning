#include <stdio.h>

void swap_v(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swap_p(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void func_06()
{
	int a = 10;
	int b = 20;
	//ֵ����
	swap_v(a, b); //�����ڽ�����ֵ����
	printf("%d %d\n", a, b);

	//��ַ���� ֵ�ı� 
	//�β�Ҫ��ʵ�θ�һ�������޸�
	swap_p(&a, &b);
	printf("%d %d\n", a, b); //


}