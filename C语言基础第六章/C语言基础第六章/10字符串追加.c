#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void my_strcat(char *dest, char *src)
{
	while (*dest)
		dest++; //�ҵ�\0

	while (*dest++ = *src++); //�ҵ�src��\0��ֹͣѭ��
	//�������������ж�ʱ���Ѿ���src��\0������dest��

}

void my_strncat(char *dest, char *src, unsigned int n)
{
	while (*dest)
		dest++; //�ҵ�\0

	while ((*dest++ = *src++) && --n);
	*dest = 0; //���ϲű�֤һ����ȷ����
}

void func_10()
{
	char str[100] = "hello\0\0a"; 
	char str2[]=" world";


	//strncat(str, str2, 2); //׷��n���ַ� �ռ䲻�㱨�� 
	//�Զ�׷��\0 ����str2����û��

	my_strncat(str, str2, 2); //׷��n���ַ� �ռ䲻�㱨�� 


	//strcat(str, str2); //��dest��str���Ŀռ䲻��ᱨ��
	// ׷�Ӱ���str2�е�\0 ������Ҫ��\0 �������
	puts(str);


}
