#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void func_13()
{
	char ch[] = "hello world";
	char c = 'o';

	char *p, *p2;
	//strchr(�ַ���, �ַ�) ��ѯ�ַ� �����״��ҵ����ַ���ָ��

	p = strchr(ch, c);
	printf("%s\n", p); //o��֮����ַ�


	//strstr(�ַ���, �ַ���) ��ѯ�ַ���
	p2 = strstr(ch, "el");
	printf("%s\n", p2); //o��֮����ַ�

}

