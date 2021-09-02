#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void func_11() {
	//字符数组
	char arr[] = { 'h', 'e','l','l','o' };
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]) ; i++)
	{
		printf("%c", arr[i]);
	}
	//不能用%s打印 因为结尾不是\0

	putchar('\n');
	//字符串
	char * arr2 = "hello"; //等同于char[6] 即hello\0
	//char arr2[6] = { 'h', 'e','l','l','o' }; //第六位初始化为\0(不是数字0) 所以等同于字符串
	//char arr2[] = "hello"; //同上
	printf("%s", arr2); //打印字符串

	char ch[10]; //但只能存9个
	printf("\n输入字符串:");
	scanf("%s", ch); //数组名可以不加&
	//输入超过9个会报错
	printf("%s\n", ch);


	//字符串拼接
	char ch1[] = "hello ";
	char ch2[] = "world";
	char ch3[20];

	int i = 0, j = 0;
	while (ch1[i]!='\0')
	{
		ch3[i] = ch1[i];
		i++;
	}
	while (ch1[j] != '\0')
	{
		ch3[i+j] = ch2[j];
		j++;
	}
	ch3[i + j] = '\0';
	printf("%s\n", ch3);
}