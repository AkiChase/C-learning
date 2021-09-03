#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
extern int add_01(int a, int b); //提前声明，可以多次声明
//int add_01(int x, int y);
//int add_01(int, int);
//省略方式

//C语言代码由上到下依次执行，原则上函数定义要出现在函数调用之前，否则就会报错。
//但在实际开发中，经常会在函数定义之前使用它们，这个时候就需要提前声明
//不同文件中调用也要声明（这是标准）
//头文件的存在就是为了提前声明
//把建立储存空间的为 定义，不建立的为 声明


//等到多文件编程时再学

extern func_02(void);


void func_03(void) //void可写可不写
{
	func_02();

	add(1,3); //实参传递 值 给形参，不是地址传递
	//若是数组的话会传递地址（函数中改变，原数组也改变）
}

//int才会是最终的返回格式（转化为int）
int add(int a, int b)
{
	return a + b;
}

int add_01(int a, int b)
{
	return 0;
}
