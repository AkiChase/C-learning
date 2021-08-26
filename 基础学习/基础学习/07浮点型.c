#include <stdio.h>

void func_07()
{

	float a = 3.14f; //不以f结尾的是double类型（转换了）
	double b = 3.14; 

	//float 为4
	//double 为8
	//浮点型储存在内存中格式分为 符号位 指数位 小数位

	int c = 10;
	float d = 3.14f;

	//%p是按16进制输出数据（用于打印地址的，和%x不一样）
	//&a 内存地址是无符号16进制整型数

	printf("%p\n", &c);
	printf("%p\n", &d);

	//科学计数法表示数

	float aa = 3.2e3f; //3*10^3
	float bb = 100e-3f; //100*10^-3 = 0.1
	//以科学记数法打印%e
	printf("%e\n", aa);

}