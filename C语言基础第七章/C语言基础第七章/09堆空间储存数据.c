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
	int *p = (int *)malloc(sizeof(int) * MAX); //开辟int数组的堆空间

	for (int i = 0; i < MAX ; i++)
	{
		p[i] = rand() % 100; //0-99随机数
		printf("%d ", p[i]);
	}
	putchar('\n');

	free(p); //释放空间 p必须是原来指针的值
	//释放后原来空间内的值就丢失了，指针虽然不变
	//printf("测试：%d\n", p[1]);

}