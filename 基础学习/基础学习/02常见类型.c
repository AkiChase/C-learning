#include <stdio.h>

//�궨�峣�� ע��û�Ⱥ� û�ֺ�
#define PI 3.14159

void func_02()
{
	//Alt+left������ȫ��ʾ���༭.�г���Ա��

	printf("�ڶ��γ��򣺳�������\n");
	//const float	pi = 3.14; // const ��ʾ����(ֻ��) ���ɸı�
	//����Ⱥ궨����C�����в���ȫ��C++�а�ȫ��


	//����ֲ�����ʱ �ɼ�auto���Σ���ʡ�ԣ�
	double r = 2.l; // ֱ��=2Ҳ��
	double s = PI * r * r;
	printf("�����%.2f\n", s); //������λС��
}