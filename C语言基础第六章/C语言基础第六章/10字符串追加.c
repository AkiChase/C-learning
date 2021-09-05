#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void my_strcat(char *dest, char *src)
{
	while (*dest)
		dest++; //找到\0

	while (*dest++ = *src++); //找到src的\0后停止循环
	//（但是在条件判断时，已经把src的\0赋给了dest）

}

void my_strncat(char *dest, char *src, unsigned int n)
{
	while (*dest)
		dest++; //找到\0

	while ((*dest++ = *src++) && --n);
	*dest = 0; //补上才保证一定正确结束
}

void func_10()
{
	char str[100] = "hello\0\0a"; 
	char str2[]=" world";


	//strncat(str, str2, 2); //追加n个字符 空间不足报错 
	//自动追加\0 不论str2中有没有

	my_strncat(str, str2, 2); //追加n个字符 空间不足报错 


	//strcat(str, str2); //若dest（str）的空间不足会报错
	// 追加包括str2中的\0 （必须要有\0 否则出错）
	puts(str);


}
