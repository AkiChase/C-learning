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
	//strcmp() ����ascii��ֵ  ǰ�ߴ��򷵻�1 ���ߴ󷵻�-1 ��ȷ���0
	//��������\0ֹͣ
	char s1[] = "hello\0a";
	char s2[] = "hello\0b";
	printf("%d\n", my_strcmp(s1, s2));

	//strncmp() �Ƚ�ǰn���ַ�

	printf("%d\n", strncmp(s1, s2, 5));
}