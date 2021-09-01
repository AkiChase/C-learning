//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable:4996)

void func_04() {
	int a;
	printf("请输入整型:");

	// &表示取地址
	scanf("%d", &a); //%d表示格式化为整型

	//每个空格 或者 换行 都是一个scanf读取一个变量输入的结束

	// scanf 可能引起安全警报，两种方法关闭
	//将#define _CRT_SECURE_NO_WARNINGS放在开头
	//或加上#pragma warning(disable:4996)

}