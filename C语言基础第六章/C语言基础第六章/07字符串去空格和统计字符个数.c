#include <stdio.h>

int get_str_count(char *ch) { //统计非空格字符数
	int count = 0;
	while (*ch)
	{
		if (*ch!=' ')
		{
			count++;
			ch++;
		}
	}
	return count;
}

int letter_count(char *str) {
	int arr[26] = { 0 };

	while (*str)
	{
		arr['z' - *str]++;
		str++;
	}

	for (int i = sizeof(arr) / sizeof(arr[0]) - 1; i >= 0 ; i--)
	{
		if (arr[i]!=0)
		{
			printf("%c:%d\n", 'z' - i, arr[i]);
		}
	}

}

void func_07()
{
	letter_count("fahjdhfadnfkjadbgajd");
}