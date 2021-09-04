#include <stdio.h>

void swap_v(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swap_p(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void func_06()
{
	int a = 10;
	int b = 20;
	//值传递
	swap_v(a, b); //函数内交换后，值不变
	printf("%d %d\n", a, b);

	//地址传递 值改变 
	//形参要比实参高一级才能修改
	swap_p(&a, &b);
	printf("%d %d\n", a, b); //


}