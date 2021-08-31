#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func_08()
{
	printf("ÊäÈëscore£º");
	int score;
	scanf("%d", &score);
	if (score > 700)
	{
		printf(">700");
	}
	else if (score > 600)
	{
		printf(">600");
	}
	else
	{
		printf("no");
	}

}