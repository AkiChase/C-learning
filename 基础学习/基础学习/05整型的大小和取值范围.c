#include <stdio.h>

void func_05()
{
	//有符号整型变量(4) 32bit 第一位是符号
	int a = 10;
	//短整型(2)	长度：
	short b = 20;
	//长整型(4)	长度：
	long c = 30;

	printf("%d\n", a);	//有符号整型
	printf("%hd\n", b); //短整型（unsigned）
	printf("%ld\n", c); //长整型（unsigned）

	//sizeof()计算数据类型在内存中占的字节（byte）大小
	//1B(byte) = 8bit
	//返回类型是size_t

	size_t len = sizeof(c);
	printf("%d\n", len);

	//小的数据类型赋值给大的会自动转化为大的
	//大的给小的可能导致高位丢失
}