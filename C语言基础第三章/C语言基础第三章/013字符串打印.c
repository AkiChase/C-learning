#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void func_13()
{
	char ch[] = "test line";
	//puts() Ҳ������\0ֹͣ��ֻ��������Զ���һ��\n
	puts(ch);

	//����\0ֹͣ, �����\n
	fputs(ch, stdout);
	//��ʵ�������ļ���д�ϵ�
	putchar('\n');

	//�����ַ������� strlen
	//�����һ��\0֮ǰ����Ч�ַ���
	char ch1[100] = "hello\0 world";
	printf("�����С��%d\n", sizeof(ch1));
	printf("�ַ����ȣ�%d\n", strlen(ch1));

	if (1) //һ�п��Բ��ӻ�����
		printf("����");

}

