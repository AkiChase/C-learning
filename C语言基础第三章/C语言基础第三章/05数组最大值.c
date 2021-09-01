#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void func_05()
{
	int arr[] = { 10,32,11,55,12,32,99 };
	int max = arr[0];
	for (int i=1;i< sizeof(arr) / sizeof(arr[0]);i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}
	printf("最大值为：%d\n", max);
}