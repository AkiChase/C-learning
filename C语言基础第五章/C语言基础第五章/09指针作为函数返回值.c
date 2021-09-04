#include <stdio.h>

char* char_instr(char* str, char ch)
{
	while(*str)
	{
		if (*str==ch)
			return str;
		str++;
	}
	return NULL; //返回空指针
}

void func_09()
{
	char str[] = "test_world";
	char* p = char_instr(str, 't');
	if (p!=NULL)
		printf("首次出现位置为:%d\n", p - str);
	else
		printf("未找到\n");
}