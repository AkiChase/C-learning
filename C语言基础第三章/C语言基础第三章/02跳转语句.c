#include <stdio.h>
/*
break
continue

goto 语句 (没有gosub)
所以跳到另一个循环后就不会再跳回来了
*/

//使用goto构成死循环
/*
FLAG:
	printf("语句2\n");
goto FLAG;
*/

void func_02()
{
	printf("语句1\n");
	goto FLAG;
	printf("语句2\n");
FLAG:
	printf("语句3\n");
}
