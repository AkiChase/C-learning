#include <stdio.h>

char* char_instr(char* str, char ch)
{
	while(*str)
	{
		if (*str==ch)
			return str;
		str++;
	}
	return NULL; //���ؿ�ָ��
}

void func_09()
{
	char str[] = "test_world";
	char* p = char_instr(str, 't');
	if (p!=NULL)
		printf("�״γ���λ��Ϊ:%d\n", p - str);
	else
		printf("δ�ҵ�\n");
}