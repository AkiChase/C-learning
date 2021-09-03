#include <stdio.h>

void str_copy(char* dest, char* ch) {
	//int i = 0;
	//while (ch[i]) //等同于ch[i]!=0 等同于ch[i]!='\0'
	//{
	//	*(dest + i) = ch[i]; //两种表示方式
	//	i++;
	//}
	//dest[i] = 0; //补上\0

	//指针偏移的方式
	//while (ch)
	//{
	//	*dest = *ch;
	//	dest++;
	//	ch++;
	//}
	//*dest = 0;


	//简写 条件=*dest++ = *ch++
	/*
	1.*ch取值
	2.*dest取值
	3.条件= *dest = *ch
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
	//p[-4]; //即arr[0]没越界
	p--; //这样得到的不会是&arr[3] 因为类型不对，-1的大小不同
	
	//两指针不能相加、乘、除等等 因为结果没意义

}