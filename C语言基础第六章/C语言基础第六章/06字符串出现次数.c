#include <stdio.h>

int str_instr(char* str, char* find_text)
{
	int flag;
	char* p = str; //用于遍历str的指针
	while (*p) //循环直到str结束
	{
		if (*p == *find_text)
		{
			int i = 0;
			flag = 1;

			while (*(find_text + i)) //循环直到find_text结束
			{
				//printf("%d %d\n", *(find_text + i), *(p + i));
				if (*(find_text + i) != *(p + i))
				{
					flag = 0;
					break;
				}
				i++;
			}
			if (flag)
				return p - str; //返回偏移（即找到的位置）
		}
		p++;
	}
	return -1;
}

int str_count(char* str, char* find_text) {
	char* temp = str;
	int c = 0;
	int index = str_instr(temp, find_text);

	while (index != -1)
	{
		temp += strlen(find_text)+index;
		c++;
		index = str_instr(temp, find_text);
	}
	return c;
}

void func_06()
{
	char str[] = "2222222222";
	//利用instr 重复累加直到返回找不到
	printf("%d\n", str_count(str, "22"));
}