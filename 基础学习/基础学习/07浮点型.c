#include <stdio.h>

void func_07()
{

	float a = 3.14f; //����f��β����double���ͣ�ת���ˣ�
	double b = 3.14; 

	//float Ϊ4
	//double Ϊ8
	//�����ʹ������ڴ��и�ʽ��Ϊ ����λ ָ��λ С��λ

	int c = 10;
	float d = 3.14f;

	//%p�ǰ�16����������ݣ����ڴ�ӡ��ַ�ģ���%x��һ����
	//&a �ڴ��ַ���޷���16����������

	printf("%p\n", &c);
	printf("%p\n", &d);

	//��ѧ��������ʾ��

	float aa = 3.2e3f; //3*10^3
	float bb = 100e-3f; //100*10^-3 = 0.1
	//�Կ�ѧ��������ӡ%e
	printf("%e\n", aa);

}