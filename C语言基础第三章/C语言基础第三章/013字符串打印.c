#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void func_13()
{
	char ch[] = "test line";
	//puts() 也是遇到\0停止，只是输出后自动加一个\n
	puts(ch);

	//遇到\0停止, 不会加\n
	fputs(ch, stdout);
	//其实是用在文件读写上的
	putchar('\n');

	//计算字符串长度 strlen
	//计算第一个\0之前的有效字符数
	char ch1[100] = "hello\0 world";
	printf("数组大小：%d\n", sizeof(ch1));
	printf("字符长度：%d\n", strlen(ch1));

	if (1) //一行可以不加花括号
		printf("结束");

}

