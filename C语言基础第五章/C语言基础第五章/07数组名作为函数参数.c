#include <stdio.h>
#include <stdlib.h>

void str_add(char* ch, char* add_text)
{
	int len = strlen(ch);//不能用sizeof来求
	//不包括最后的\0

	int i = 0;
	while (add_text[i]!=0)
	{
		ch[i + len] = add_text[i]; //第一次恰好覆盖了\0
		i++;
	}
	ch[i + len] = 0; //补上\0
}

void func_07()
{
	char s[100] = "test";
	str_add(s, " aaa");
	printf("%d\n", strlen(s));
	puts(s);
}