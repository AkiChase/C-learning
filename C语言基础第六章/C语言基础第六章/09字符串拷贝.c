#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

void func_09() {
	//strcpy(dest, src) �ַ������� src --> source
	char ch1[] = "hello world";
	char ch2[100] = {0}; //�ڴ�ռ��С�ᱨ��
	char ch3[100] = {0}; //�ڴ�ռ��С�ᱨ��

	strcpy(ch2, ch1); //�ǲ���ȫ�� Ҫ#define _CRT_SECURE_NO_WARNINGS
	puts(ch2);


	//����ǰnλ(ע����û\0Ҫ����\0)
	strncpy(ch3, ch1, 5); //n������󳤶���Ӱ��
	puts(ch3);

}