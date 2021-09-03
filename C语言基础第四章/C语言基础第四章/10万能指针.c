#include <stdio.h>

void func_10() {
	int a = 10;
	//万能指针 可以接收任意类型变量的内存地址
	void* p = &a;

	//在通过万能指针修改变量值时，需要找到变量对应的指针类型
	//(int*)转为正确的指针类型
	*(int*)p = 100;
	
	printf("%d\n", a);


}