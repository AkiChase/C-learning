#include <stdio.h>

void func_05()
{
	int a[] = { 1,2,3 };
	int b[] = { 4,5,6 };
	int c[] = { 7,8,9 };

	int* arr[3] = { a, b, c };
	//指针数组和二级指针建立关系
	int** p1 = arr;

	printf("%d\n", *(*(p1 + 1) + 1)); //p1[1][1]

	int d = 10;
	int* p = &a;
	int** pp = &p; //二级指针
	int*** ppp = &pp; //&不能多个
	//**ppp == *pp == p = &a

}