//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable:4996)

void func_04() {
	int a;
	printf("����������:");

	// &��ʾȡ��ַ
	scanf("%d", &a); //%d��ʾ��ʽ��Ϊ����

	//ÿ���ո� ���� ���� ����һ��scanf��ȡһ����������Ľ���

	// scanf ��������ȫ���������ַ����ر�
	//��#define _CRT_SECURE_NO_WARNINGS���ڿ�ͷ
	//�����#pragma warning(disable:4996)

}