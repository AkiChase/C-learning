#include <stdio.h>

void func_06()
{
	char ch = 'a'; //ֻ�ܴ�һ���ַ� ע�����˵�����
	
	//char�����Ǵ�СΪ1������

	printf("%c\n", ch);
	printf("�ַ��ʹ�С��%d\n", sizeof(ch)); //Ϊ1
	printf("%d\n", ch); //��ӡ�ַ���Ӧ��ascii��
	//��32���ո񣩿�ʼ�����������ҵ�
	// 0 ��Ӧ48
	// A ��Ӧ65
	// a ��Ӧ97
	// Сд��ĸ-32 = ��д��ĸ

	char ch1 = 'a';
	char ch2 = 'A';
	printf("%d\n", ch1 - ch2); //��Ϊ�������Ӽ�
	printf("%c\n", 97);

	//��ӡ�ٷֺ�% ��%%
	printf("�ٷֺţ�%%\n");

}	

