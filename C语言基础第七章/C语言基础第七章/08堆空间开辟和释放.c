#include <stdio.h>
#include <stdlib.h>



void func_08()
{
	//ջ������1M�ᱨ��

	//���ٶѿռ�洢����
	//malloc(size_t size) �޷�������
	//�ɹ�����void *��ַ ʧ�ܷ���NULL


	int* p =malloc(sizeof(int)*100); //���ٴ�100��int�Ŀռ�
	printf("%p\n", p);
	free(p); //�ͷŶѿռ�

}