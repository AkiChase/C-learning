#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func_12()
{
	char ch[11];
	scanf("%10s", ch); //���ƶ�ȡ�ĳ���Ϊ9(ʣ�ಿ�ֻ��ڻ�����)
	printf("%s\n", ch);
	//һ������ռ�������ֽ�

	getchar();

	//scanf�в������пո�, gets�п���
	char ch2[100];
	gets(ch2);
	printf("%s\n", ch2);

	getchar();
	
	char ch3[11];
	fgets(ch3, sizeof(ch3), stdin); 
	printf("%s", ch2);
	//�ǰ�ȫ�ģ�����Ҫ���Ծ���
	//��Ԥ��\0��λ��
	//���ǻ�ѻس�Ҳ��ȡ���ַ�����(����ַ���С��size-1)
}

