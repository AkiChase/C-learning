#include <stdio.h>

void func_04()
{
	//ָ������ ÿ��Ԫ�ض���ָ��
	int a = 1, b = 2;
	int c[] = { 3,4,5 };

	int* arr[3] = {&a, &b, c};
	//ָ�������Ӧ�ڶ���ָ��
	int** p = arr;

	printf("%d\n", *arr[0]);
	printf("%d\n", arr[2][1]); //���ƶ�ά����ķ�ʽ
	printf("%d\n", *(arr[2]+1)); //�õ�ַƫ�Ƶķ�ʽ

}