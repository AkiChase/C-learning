/*
�ַ���ʱ�ڴ���һ��������char�ռ䣬��'\0'(���ַ�)��β

'a' "a"��ͬ ǰ�����ַ������� �������ַ��� "a\0" ��СΪ2


*/
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func_03()
{
	char *b = "hello\0 world";

	printf("%s\n", b); //���hello
	//%s ��ʾ���һ���ַ���������\0ֹͣ

	char c[11] = "hello world"; //��СΪ11+1
	printf("%s\n", c); //���hello world ����������

	//char a = 65; //ע���ʱ��ʾascii�루û�����ţ�
	//printf("%c\n", a);
	
	//���Ӹ�ʽ�����

	// - ����루Ĭ���Ҷ��룩
	// ���� ���ȣ���������ȴ����޶��������������Ŀ�ȣ�
	// 0 ��ʾ�����0��ȫ
	float a = 3.45;
	printf("===%-7.1f===\n", a);

	//���ֳ����˷�Χ
	char ch = 'a';
	putchar(ch);//���һ���ַ�
	putchar('B');
	putchar(97);
	putchar('\n'); //ע���ǵ�����


	char ch1, ch2;
	printf("�����������ݣ�");
	scanf("%c %c", &ch1, &ch2); //����ʱ�ÿո���߻��� �ֿ�
	// "%c|||%c" ��Ҫ ֵ1|||ֵ2�ĸ�ʽ����
	//����д\n
	
	printf("%c��%c\n", ch1, ch2);

	getchar(); //Ϊ�˷�ֹ��һ��getchar����Ч�������ջس�����
	printf("�����ַ���");
	char ch3;
	ch3 = getchar(); 
	//�����ַ�(��ʱ����Ч����Ϊ֮ǰscanf�������в����������ݣ��س���)
	putchar(ch3);
	printf("\n����");
	//getchar(); //����ʱͣ�����棨��pause��


}


