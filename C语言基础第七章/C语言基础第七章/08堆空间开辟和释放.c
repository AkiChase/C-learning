#include <stdio.h>
#include <stdlib.h>



void func_08()
{
	//栈区超出1M会报错

	//开辟堆空间存储数据
	//malloc(size_t size) 无符号整型
	//成功返回void *地址 失败返回NULL


	int* p =malloc(sizeof(int)*100); //开辟存100个int的空间
	printf("%p\n", p);
	free(p); //释放堆空间

}