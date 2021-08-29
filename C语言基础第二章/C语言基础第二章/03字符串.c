/*
字符串时内存中一段连续的char空间，以'\0'(空字符)结尾

'a' "a"不同 前者是字符常量， 后者是字符串 "a\0" 大小为2


*/
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func_03()
{
	char *b = "hello\0 world";

	printf("%s\n", b); //输出hello
	//%s 表示输出一个字符串，遇到\0停止

	char c[11] = "hello world"; //大小为11+1
	printf("%s\n", c); //输出hello world 和乱码内容

	//char a = 65; //注意此时表示ascii码（没单引号）
	//printf("%c\n", a);
	
	//附加格式化输出

	// - 左对齐（默认右对齐）
	// 数字 表宽度（若本来宽度大于限定宽度则输出本来的宽度）
	// 0 表示左侧用0补全
	float a = 3.45;
	printf("===%-7.1f===\n", a);

	//汉字超出了范围
	char ch = 'a';
	putchar(ch);//输出一个字符
	putchar('B');
	putchar(97);
	putchar('\n'); //注意是单引号


	char ch1, ch2;
	printf("输入两个内容：");
	scanf("%c %c", &ch1, &ch2); //输入时用空格或者换行 分开
	// "%c|||%c" 则要 值1|||值2的格式输入
	//不能写\n
	
	printf("%c和%c\n", ch1, ch2);

	getchar(); //为了防止下一个getchar不生效，起吸收回车作用
	printf("输入字符：");
	char ch3;
	ch3 = getchar(); 
	//接收字符(有时候不生效，因为之前scanf输入流有残留输入数据（回车）)
	putchar(ch3);
	printf("\n结束");
	//getchar(); //能暂时停留界面（像pause）


}


