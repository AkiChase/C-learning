#include <stdio.h>

void func_05()
{
	//�з������ͱ���(4) 32bit ��һλ�Ƿ���
	int a = 10;
	//������(2)	���ȣ�
	short b = 20;
	//������(4)	���ȣ�
	long c = 30;

	printf("%d\n", a);	//�з�������
	printf("%hd\n", b); //�����ͣ�unsigned��
	printf("%ld\n", c); //�����ͣ�unsigned��

	//sizeof()���������������ڴ���ռ���ֽڣ�byte����С
	//1B(byte) = 8bit
	//����������size_t

	size_t len = sizeof(c);
	printf("%d\n", len);

	//С���������͸�ֵ����Ļ��Զ�ת��Ϊ���
	//��ĸ�С�Ŀ��ܵ��¸�λ��ʧ
}