#include <stdio.h>

void func_07()
{
	//ת��ԭ��ռ���ڴ��ֽ����ٵ�-->��ģ��Ա�֤���Ȳ�����

	float p = 3.99;
	int w = 2;

	double p1 = p * w; //��ʽת��

	//ǿ��ת����
	int p2 = (int)p * w;
	//(��������) ǿ������ת�������(������������
	int p3 = (int)(p*w); //�������ת��

	printf("%lf\n", p1);
	printf("%d\n", p2);
	printf("%d\n", p3);

}