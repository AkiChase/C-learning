#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void func_14()
{
	char ch[] = "www.baidu.com";

	//strtok(str, delm) 将字符串分割
	//会破坏原字符串 用\0替换被分割的字符 每次分割一个字符

/*
	//返回分割后首地址
	char *p = strtok(ch, ".");
	printf("%s\n", p);

	//原字符串余下部分保留在缓冲区 所以用null
	p = strtok(NULL, ".");
	printf("%s\n", p);

	//若没找到 则原封不动的输出
	p = strtok(NULL, ".");
	printf("%s\n", p);*/

	char *p = strtok(ch, ".");
	while (p) //剩下内容为空时 p=NULL
	{
		printf("%s\n", p);
		p = strtok(NULL, ".");
	}

	

}