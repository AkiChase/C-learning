#include <stdio.h>

int str_instr(char* str, char* find_text)
{
	int flag;
	char* p = str; //用于遍历str的指针
	while (*p) //循环直到str结束
	{
		if (*p==*find_text)
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


void func_10()
{
	printf("%d\n", str_instr("呢", "呢你说"));
}