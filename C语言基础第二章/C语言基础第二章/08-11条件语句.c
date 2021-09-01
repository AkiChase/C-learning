#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func_08()
{
	//三目运算符
	//表达式1?表达式2:表达式3
	int a = 10;
	int b = 20;
	int c;
	c = a > b ? a : b;
	printf("最大值为%d\n", a > b ? a : b);

	printf("输入score：");
	int score;
	scanf("%d", &score);
	if (score > 700)
	{
		printf(">700\n");
	}
	else if (score > 600)
	{
		printf(">600\n");
	}
	else
	{
		printf("no\n");
	}

	//switch 语句 效率高于if else 语句
	switch (score/10) //是 int 类型的
	{
	case 10:
	case 9:
	case 8:
		printf("优秀\n");
		break; //若没有break会继续往下运行
	case 7:
	case 6:
		printf("良好\n");
		break;
	default: //其他情况（前提要把score范围限定好）
		printf("不及格\n");
		break;
	} 

}