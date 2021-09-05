#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

void func_09() {
	//strcpy(dest, src) 字符串复制 src --> source
	char ch1[] = "hello world";
	char ch2[100] = {0}; //内存空间更小会报错
	char ch3[100] = {0}; //内存空间更小会报错

	strcpy(ch2, ch1); //是不安全的 要#define _CRT_SECURE_NO_WARNINGS
	puts(ch2);


	//拷贝前n位(注意若没\0要补充\0)
	strncpy(ch3, ch1, 5); //n超过最大长度无影响
	puts(ch3);

}