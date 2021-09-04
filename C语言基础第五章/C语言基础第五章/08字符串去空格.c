#include <stdio.h>

void func_08()
{
	char str[]="te s t w  or ds !";
	int i = 0, j = 0;
	while (str[i] != 0)
	{
		if (str[i]!=' ')
			str[j++] = str[i];
		i++;
	}
	str[j] = 0;

	puts(str);
}