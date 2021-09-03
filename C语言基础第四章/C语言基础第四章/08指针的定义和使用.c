#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func_08()
{
	int a = 10;
	printf("%p\n", &a);

	//定义指证变量储存变量地址
	//类型* 名[ = &变量];
	int* p = &a;
	printf("%p\n", p);
	printf("%d\n", a);

	//*指针变量 表示指针对应变量
	//* 取值运算符
	*p = 100; //间接修改a的值
	printf("%d\n", *p);
	printf("%d\n", a);

	//因为地址是无符号16进制整数
	//所以指针类型大小 在32位下是4 64位下是8
	printf("指针的大小%d\n", sizeof(char*));

}

