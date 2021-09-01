#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

void func_12() {
	int i = 1;

	while (i < 10)
	{
		printf("%d\n", i++);
	}

	printf("do while 语句\n");
	i = 0;
	do
	{
		printf("%d\n", i++);
		i--;
	} while (i); //会执行int i 溢出到变回0为止



	printf("for 循环\n");

	//可以int t=0;提前进行定义
	int j = 5;
	//1     2				3
	for (i = 0; i < 10, j <= 10; i++)
	{
		j += 5;
		//2要两个条件都满足
		printf("%d\n", i); //4的顺序执行
	}
	//各个语句都能省略

	i = 0;
	for (;;) //无限循环
	{
		i++;
		printf("%d\n", i);
		if (i >= 5)
		{
			break;
		}
	}


	printf("随机数\n");
	//产生随机数
	/*
	1.导入 time.h stdlib.h
	2.添加随机数种子（才能得到不一样的随机数）
	3.获取随机数
	*/

	//2
	srand((unsigned int)time(NULL)); //添加种子

	int value = rand(); //0 - RAND_MAX的随机数
	value % 10; //可以得到0-9的随机数(%100则0-99)
	printf("%d\n", value);

	Sleep(1000); //950ms 来自window.h
	system("cls"); //清屏
}
