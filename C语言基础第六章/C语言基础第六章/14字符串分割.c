#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void func_14()
{
	char ch[] = "www.baidu.com";

	//strtok(str, delm) ���ַ����ָ�
	//���ƻ�ԭ�ַ��� ��\0�滻���ָ���ַ� ÿ�ηָ�һ���ַ�

/*
	//���طָ���׵�ַ
	char *p = strtok(ch, ".");
	printf("%s\n", p);

	//ԭ�ַ������²��ֱ����ڻ����� ������null
	p = strtok(NULL, ".");
	printf("%s\n", p);

	//��û�ҵ� ��ԭ�ⲻ�������
	p = strtok(NULL, ".");
	printf("%s\n", p);*/

	char *p = strtok(ch, ".");
	while (p) //ʣ������Ϊ��ʱ p=NULL
	{
		printf("%s\n", p);
		p = strtok(NULL, ".");
	}

	

}