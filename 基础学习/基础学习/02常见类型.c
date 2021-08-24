#include <stdio.h>

//宏定义常量 注意没等号 没分号
#define PI 3.14159

void func_02()
{
	//Alt+left弹出补全提示（编辑.列出成员）

	printf("第二段程序：常见类型\n");
	//const float	pi = 3.14; // const 表示常量(只读) 不可改变
	//（相比宏定义在C语言中不安全，C++中安全）


	//定义局部变量时 可加auto修饰（可省略）
	double r = 2.l; // 直接=2也行
	double s = PI * r * r;
	printf("面积：%.2f\n", s); //保留两位小数
}