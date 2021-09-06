#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void func_15()
{
	//在stdlib头文件
	//atoi (auto to int)

	//只能识别10进制的整数 0x什么的不行

	//只能能跳过开头的空格直到遇到正负号或数字才开始转换
	//到遇到非数字或\0停止转换
	//失败返回0
	
	char ch[] = "   -11aaa";
	printf("%d\n", atoi(ch));


	//atof 转化为double
	char ch2[] = "   -123.123123123123123123aaa";
	double f = atof(ch2);
	printf("%.2f\n", atof(ch2));


	//atol 转化为long 类似int
}