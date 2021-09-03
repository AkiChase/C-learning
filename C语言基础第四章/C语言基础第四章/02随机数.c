#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void func_02()
{	
	srand((unsigned)time(NULL)); //放在函数内的话，每次的time其实都一样（时间差小于1s）

	int arr[10] = {0};
	int value;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		value = rand_int(1, 32);
		for (int j = 0; j < i; j++)
		{
		Flag:
			if (arr[j] == value)
			{
				value = rand_int(1, 32);
				goto Flag;
			}
		}
		arr[i] = value;
	}


	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]) ; i++)
	{
		//printf("%d ", rand_int(1, 32));

		printf("%d ", arr[i]);
	}
}

int rand_int(int a,int b) //生成[a,b]的随机整数
{
	return rand() % (b-a + 1) + a;
}