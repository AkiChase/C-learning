#include <stdio.h>

void func_09()
{
	//不同指针类型区别
	int* p;
	//*p 找的是4个字节的空间
	char* p2;
	//*p2 找的是1个字节的空间
	//所以定义指针类型时 要和变量类型对应上

	//野指针 --指针变量指向一个未知的空间
	int* p = 100; //即0x64的地址
	//可能无法读取该内存而报错
	//操作系统将0-255作为系统占用，不允许访问操作
	//printf("%d\n", *p);

	//空指针 指内存地址编号为0的空间
	p2 = NULL;
}	//可以用在条件判断（开辟失败返回空指针）
