#include <stdio.h>

void func_11_1()
{
	const int a = 10;
	//��ͨ��ָ������޸�(��#define���õĲ����޸�)

	int* p = &a;
	*p = 100;
	printf("%d\n", a);

}

void func_11() {
	int a = 10;
	int b = 20;

	//const��˭�����ܸ�˭

	//1.const ����ָ������
	//�����޸�ָ�������ֵ������������ַ��
	//�����޸�ָ��ָ���ڴ�ռ��ֵ�����ܰѵ�ַ��Ӧ��ֵ�����޸ģ�
	const int*p = &a;
	p = &b;
	printf("%d\n", *p); //��ӡ��b��ֵ


	//2.const ����ָ�����
	//�����޸�ָ��ָ���ڴ�ռ��ֵ
	//�������޸�ָ�������ֵ

	int* const p2 = &a;
	*p2 = 100;
	printf("%d\n", a); //��ӡ���޸ĺ�a��ֵ



	//3.const ����ָ�����ͺͱ���(ֻ��ָ��)
	//��ʱ���߶����ܸ���
	//��ͨ������ָ�����߶����޸�
	const int* const p3 = &a;
	int** pp = &p3;
	*pp = &b;
	printf("%d\n", *p3); //��ӡ��b��ֵ

	const int* const p4 = &a;
	int** ppp = &p4;
	**ppp = 1000;
	printf("%d\n", a); //��ӡ���޸ĺ�a��ֵ


}