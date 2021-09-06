#include <stdio.h>
#include <string.h>


int my_strcmp(char *s1, char *s2)
{
	while (*s1++ == *s2++)
	{
		if (*s1 == 0)
			return 0;
	}
	return *s1 > *s2 ? 1 : -1;
}


void func_11()
{
	//strcmp() 返回ascii差值  前者大则返回1 后者大返回-1 相等返回0
	//不会遇到\0停止
	char s1[] = "hello\0a";
	char s2[] = "hello\0b";
	printf("%d\n", my_strcmp(s1, s2));

	//strncmp() 比较前n个字符

	printf("%d\n", strncmp(s1, s2, 5));
}