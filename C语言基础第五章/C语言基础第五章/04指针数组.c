#include <stdio.h>

void func_04()
{
	//指针数组 每个元素都是指针
	int a = 1, b = 2;
	int c[] = { 3,4,5 };

	int* arr[3] = {&a, &b, c};
	//指针数组对应于二级指针
	int** p = arr;

	printf("%d\n", *arr[0]);
	printf("%d\n", arr[2][1]); //类似二维数组的方式
	printf("%d\n", *(arr[2]+1)); //用地址偏移的方式

}