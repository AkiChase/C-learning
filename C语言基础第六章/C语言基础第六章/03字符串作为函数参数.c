#include <stdio.h>

int my_strlen(const char* str) {
	//const ��֤�����޸� str�����е�����
	if (str = NULL)
		return 0;


	char* temp = str;
	while (*temp)
		temp++;
	return temp - str;
}

void func_03()
{
	printf("%d\n", my_strlen("test"));
}