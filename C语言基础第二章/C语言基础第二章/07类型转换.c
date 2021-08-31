#include <stdio.h>

void func_07()
{
	//转换原则：占用内存字节数少的-->多的，以保证精度不降低

	float p = 3.99;
	int w = 2;

	double p1 = p * w; //隐式转换

	//强制转换：
	int p2 = (int)p * w;
	//(数据类型) 强制类型转换运算符(不会四舍五入
	int p3 = (int)(p*w); //运算后再转换

	printf("%lf\n", p1);
	printf("%d\n", p2);
	printf("%d\n", p3);

}