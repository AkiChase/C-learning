#include <stdio.h>

void func_03() 
{
	int a = 3;
	//无符号 unsigned 若加- 格式化为无符号%u时输出为乱码数字
	//有符号（可加+-） signed(默认）
	printf("%d\n", a); //有符号的10进制输出
	printf("%u\n", a); //无符号的10进制输出

	printf("%x\n", a); //16进制输出（%X则字母大写）
	printf("%o\n", a); //8进制输出
	//注意负数16、8进制表示的方式不是用-号


	int b = 0123; //0开头是8进制
	int c = 0x12abc; //0x开头是16进制 （忽略字母大小写）
	printf("%d  %d\n", b, c);
	//不能直接定义二进制
}
