#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void func_11() {
	//�ַ�����
	char arr[] = { 'h', 'e','l','l','o' };
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]) ; i++)
	{
		printf("%c", arr[i]);
	}
	//������%s��ӡ ��Ϊ��β����\0

	putchar('\n');
	//�ַ���
	char * arr2 = "hello"; //��ͬ��char[6] ��hello\0
	//char arr2[6] = { 'h', 'e','l','l','o' }; //����λ��ʼ��Ϊ\0(��������0) ���Ե�ͬ���ַ���
	//char arr2[] = "hello"; //ͬ��
	printf("%s", arr2); //��ӡ�ַ���

	char ch[10]; //��ֻ�ܴ�9��
	printf("\n�����ַ���:");
	scanf("%s", ch); //���������Բ���&
	//���볬��9���ᱨ��
	printf("%s\n", ch);


	//�ַ���ƴ��
	char ch1[] = "hello ";
	char ch2[] = "world";
	char ch3[20];

	int i = 0, j = 0;
	while (ch1[i]!='\0')
	{
		ch3[i] = ch1[i];
		i++;
	}
	while (ch1[j] != '\0')
	{
		ch3[i+j] = ch2[j];
		j++;
	}
	ch3[i + j] = '\0';
	printf("%s\n", ch3);
}