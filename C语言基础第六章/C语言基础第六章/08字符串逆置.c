#include <stdio.h>
#include <string.h>

void str_reverse(char *str)
{
	int i = 0;
	int j = strlen(str) - 1;

	while (i<j)
	{
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;j--;
	}

}

int symm(char *str) //»ØÎÄÅĞ¶Ï
{
	char *lp = str;
	char *rp = str + strlen(str) - 1;
	
	while (lp<rp)
	{
		if (*lp!=*rp)
		{
			return 1;
		}
		lp++; rp--;
	}
	return 0;
}


void func_08() {
	char str[] = "abcd";
	str_reverse(str);
	puts(str);

	printf("%s\n", symm("abddba") ? "·ñ" : "ÊÇ");
}