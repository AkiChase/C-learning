#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func_12()
{
	char ch[11];
	scanf("%10s", ch); //限制读取的长度为9(剩余部分会在缓存区)
	printf("%s\n", ch);
	//一个汉字占用两个字节

	getchar();

	//scanf中不允许有空格, gets中可以
	char ch2[100];
	gets(ch2);
	printf("%s\n", ch2);

	getchar();
	
	char ch3[11];
	fgets(ch3, sizeof(ch3), stdin); 
	printf("%s", ch2);
	//是安全的，不需要忽略警告
	//会预留\0的位置
	//但是会把回车也读取到字符串里(如果字符数小于size-1)
}

