#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define MAX 10

void func_09()
{
	srand((size_t)time(NULL));
	int *p = (int *)malloc(sizeof(int) * MAX); //����int����Ķѿռ�

	for (int i = 0; i < MAX ; i++)
	{
		p[i] = rand() % 100; //0-99�����
		printf("%d ", p[i]);
	}
	putchar('\n');

	free(p); //�ͷſռ� p������ԭ��ָ���ֵ
	//�ͷź�ԭ���ռ��ڵ�ֵ�Ͷ�ʧ�ˣ�ָ����Ȼ����
	//printf("���ԣ�%d\n", p[1]);

}