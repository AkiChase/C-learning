#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void func_13()
{
	char ch[] = "hello world";
	char c = 'o';

	char *p, *p2;
	//strchr(字符串, 字符) 查询字符 返回首次找到该字符的指针

	p = strchr(ch, c);
	printf("%s\n", p); //o和之后的字符


	//strstr(字符串, 字符串) 查询字符串
	p2 = strstr(ch, "el");
	printf("%s\n", p2); //o和之后的字符

}

