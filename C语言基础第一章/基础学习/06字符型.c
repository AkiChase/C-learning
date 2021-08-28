#include <stdio.h>

void func_06()
{
	char ch = 'a'; //只能存一个字符 注意用了单引号
	
	//char本质是大小为1的整型

	printf("%c\n", ch);
	printf("字符型大小：%d\n", sizeof(ch)); //为1
	printf("%d\n", ch); //打印字符对应的ascii码
	//从32（空格）开始，键盘上能找到
	// 0 对应48
	// A 对应65
	// a 对应97
	// 小写字母-32 = 大写字母

	char ch1 = 'a';
	char ch2 = 'A';
	printf("%d\n", ch1 - ch2); //作为整型来加减
	printf("%c\n", 97);

	//打印百分号% 用%%
	printf("百分号：%%\n");

}	

