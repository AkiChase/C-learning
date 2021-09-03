#include <stdio.h>

void func_11_1()
{
	const int a = 10;
	//但通过指针可以修改(用#define设置的不能修改)

	int* p = &a;
	*p = 100;
	printf("%d\n", a);

}

void func_11() {
	int a = 10;
	int b = 20;

	//const离谁近不能改谁

	//1.const 修饰指针类型
	//可以修改指针变量的值（换成其他地址）
	//不能修改指针指向内存空间的值（不能把地址对应的值进行修改）
	const int*p = &a;
	p = &b;
	printf("%d\n", *p); //打印了b的值


	//2.const 修饰指针变量
	//可以修改指针指向内存空间的值
	//不可以修改指针变量的值

	int* const p2 = &a;
	*p2 = 100;
	printf("%d\n", a); //打印了修改后a的值



	//3.const 修饰指针类型和变量(只读指针)
	//此时两者都不能改了
	//但通过二级指针两者都能修改
	const int* const p3 = &a;
	int** pp = &p3;
	*pp = &b;
	printf("%d\n", *p3); //打印了b的值

	const int* const p4 = &a;
	int** ppp = &p4;
	**ppp = 1000;
	printf("%d\n", a); //打印了修改后a的值


}