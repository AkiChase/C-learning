#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func_02()
{
	char str[] = "hello";

	char* p = "hello"; //������ʵҲ����
	printf("%s\n", p);

	//��������������޸��ַ�����ַ����
	str[2] = 'm';
	//p[2] = 'm'; err
	//*(p + 2) = 'm'; err

	//��Ϊǰ����ջ���ַ������������������������ַ���


	char* p1 = "hello"; //������p1��p2�ĵ�ַһ��
	char* p2 = "hello";
	printf("%p\n%p\n", p1, p2);


	//ͬ�� ֱ�ӷ����ַ���ַ����ǲ����޸ĵ�
	char* arr[] = { "hey", "world","he" };
	//���� ð�ݷ�
	int len = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < len -1 ; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			int k = 0;

			while (arr[j][k] && (arr[j][k] == arr[j+1][k]))
			{
				k++;//ǰ�߲���\0 �� ������ͬ ����һ���ַ�λ��
			}

			//ǰ�����ȱ��\0˵��ǰ�߸�С��������
			//�������ȱ��\0˵�����߸�С������
			if (arr[j][k] > arr[j + 1][k])
			{
				char* temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]) ; i++)
	{
		puts(arr[i]);
	}

}