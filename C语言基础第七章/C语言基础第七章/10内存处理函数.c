#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void func_10()
{
	//malloc开辟的堆空间使用时注意不要越界 否则free时会报错

	//指针free过后就不变成野指针 野指针不能进行释放
	//NULL指针可以多次free()

	int *p = malloc(sizeof(int) * 10);

	//memset() 将内存的前n个字节设置为参数s

	memset(p, 0, sizeof(int) * 10); //0000 还是0
	//可以方便的用于重置为0， 其他值不合适
	//如果是char * 可以 但是要注意\0
	free(p);




	//memcpy(dest, src. n)
	//拷贝src内存前n个字节到dest内存地址上
	//dest src发生重叠可能会报错


	int arr[] = { 1,2,3,4,5 };
	int *p2 = malloc(sizeof(int) * 10);
	memcpy(p2, arr, sizeof(int) * 5);

	memcpy(&arr[0], &arr[1], sizeof(int) * 4); //重叠，可能报错


	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", arr[i]);
	}

	free(p2);


	//memmove() 用法和memcpy一样，dest和src重叠时仍能正常处理 是安全的
	//但有重叠时执行效率低于memcpy


	//memcmp(s1,s2,n) 比较s1,s2的前n个字节

}