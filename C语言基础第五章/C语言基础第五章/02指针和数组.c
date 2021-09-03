#include <stdio.h>

void func_02() {
	//数组名是数组首元素的地址(即指针)
	int arr[] = { 999,2,3,4,5,6 };

	int* p;
	p = arr;
	printf("%d\n", *p); //打印的是arr[0]

	*p = 666; //修改了arr[0]

	//printf("%d\n", *(arr + 1)); //地址偏移
	printf("%d\n", *(p+1)); //地址偏移
	//指针类型变量+1等同于内存地址+sizeof(type)
	
	printf("%d\n", p[1]); //就和arr[1]一样

	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]) ; i++)
	{
		printf("%d ", *p++); //结束后p!=arr 。p变成野指针
	}

	//两个指针相减 得到两个指针的偏移量(步长)
	//所有的指针类型得到结果都是int
	//类型相同指针才能相减
	int step = p - arr; //得到的值是除以了sizeof(type)


	//*(p+1)
	//p[1]

	//p是变量  arr是常量
	//p 4字节 arr是数组 大小不同

	//数组传参到形参时，会退化为指针
	//丢失了arr的大小

}