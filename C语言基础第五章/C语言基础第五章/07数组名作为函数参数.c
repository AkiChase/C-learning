#include <stdio.h>
#include <stdlib.h>

void str_add(char* ch, char* add_text)
{
	int len = strlen(ch);//������sizeof����
	//����������\0

	int i = 0;
	while (add_text[i]!=0)
	{
		ch[i + len] = add_text[i]; //��һ��ǡ�ø�����\0
		i++;
	}
	ch[i + len] = 0; //����\0
}

void func_07()
{
	char s[100] = "test";
	str_add(s, " aaa");
	printf("%d\n", strlen(s));
	puts(s);
}