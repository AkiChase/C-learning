#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void func_10()
{
	//malloc���ٵĶѿռ�ʹ��ʱע�ⲻҪԽ�� ����freeʱ�ᱨ��

	//ָ��free����Ͳ����Ұָ�� Ұָ�벻�ܽ����ͷ�
	//NULLָ����Զ��free()

	int *p = malloc(sizeof(int) * 10);

	//memset() ���ڴ��ǰn���ֽ�����Ϊ����s

	memset(p, 0, sizeof(int) * 10); //0000 ����0
	//���Է������������Ϊ0�� ����ֵ������
	//�����char * ���� ����Ҫע��\0
	free(p);




	//memcpy(dest, src. n)
	//����src�ڴ�ǰn���ֽڵ�dest�ڴ��ַ��
	//dest src�����ص����ܻᱨ��


	int arr[] = { 1,2,3,4,5 };
	int *p2 = malloc(sizeof(int) * 10);
	memcpy(p2, arr, sizeof(int) * 5);

	memcpy(&arr[0], &arr[1], sizeof(int) * 4); //�ص������ܱ���


	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", arr[i]);
	}

	free(p2);


	//memmove() �÷���memcpyһ����dest��src�ص�ʱ������������ �ǰ�ȫ��
	//�����ص�ʱִ��Ч�ʵ���memcpy


	//memcmp(s1,s2,n) �Ƚ�s1,s2��ǰn���ֽ�

}