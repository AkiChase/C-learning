#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

void func_12()
{
	char ch[100];

	sprintf(ch, "%2d+%2d=%2d", 1, 2, 3);
	//把字符串赋给ch
	puts(ch);

	char ch2[] = {"f+0xf=30"}; //15+15=30


	//从字符串中获取内容
	int a, b, c;
	sscanf(ch2, "%x+%x=%d", &a, &b, &c);
	printf("%d %d %d\n", a, b, c);

	char ch3[100]; 
	sscanf("helloworld", "%5s", ch3); //读取长度为5
	puts(ch3);


}