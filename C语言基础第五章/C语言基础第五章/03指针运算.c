#include <stdio.h>

void str_copy(char* dest, char* ch) {
	//int i = 0;
	//while (ch[i]) //��ͬ��ch[i]!=0 ��ͬ��ch[i]!='\0'
	//{
	//	*(dest + i) = ch[i]; //���ֱ�ʾ��ʽ
	//	i++;
	//}
	//dest[i] = 0; //����\0

	//ָ��ƫ�Ƶķ�ʽ
	//while (ch)
	//{
	//	*dest = *ch;
	//	dest++;
	//	ch++;
	//}
	//*dest = 0;


	//��д ����=*dest++ = *ch++
	/*
	1.*chȡֵ
	2.*destȡֵ
	3.����= *dest = *ch
	4.ch++
	5.dest++
	*/
	while (*dest++ = *ch++);
}

void func_03()
{
	char ch[] = "hello world";
	char dest[100];
	str_copy(dest, ch);
	puts(dest);

	int arr[] = { 1,2,3,4,5,6,7 };
	char* p;
	p = &arr[4];
	//p[-4]; //��arr[0]ûԽ��
	p--; //�����õ��Ĳ�����&arr[3] ��Ϊ���Ͳ��ԣ�-1�Ĵ�С��ͬ
	
	//��ָ�벻����ӡ��ˡ����ȵ� ��Ϊ���û����

}