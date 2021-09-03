#include <stdio.h>

void str_copy(char* dest, char* ch) {
	int i = 0;
	while (ch[i]) //等同于ch[i]!=0 等同于ch[i]!='\0'
	{
		*(dest+i) = ch[i];
		i++;
	}
	dest[i] = 0; //补上\0
}

void func_03()
{
	char ch[] = "hello world";
	char dest[100];
	str_copy(dest, ch);
	
}