#include <stdio.h>

int str_instr(char* str, char* find_text)
{
	int flag;
	char* p = str; //���ڱ���str��ָ��
	while (*p) //ѭ��ֱ��str����
	{
		if (*p==*find_text)
		{
			int i = 0;
			flag = 1;

			while (*(find_text + i)) //ѭ��ֱ��find_text����
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
				return p - str; //����ƫ�ƣ����ҵ���λ�ã�
		}
		p++;
	}
	return -1;
}


void func_10()
{
	printf("%d\n", str_instr("��", "����˵"));
}