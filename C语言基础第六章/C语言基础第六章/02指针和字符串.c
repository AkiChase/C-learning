#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func_02()
{
	char str[] = "hello";

	char* p = "hello"; //这样其实也可以
	printf("%s\n", p);

	//但是用数组可以修改字符，地址不行
	str[2] = 'm';
	//p[2] = 'm'; err
	//*(p + 2) = 'm'; err

	//因为前者是栈区字符串，后者是数据区常量区字符串


	char* p1 = "hello"; //这两个p1，p2的地址一样
	char* p2 = "hello";
	printf("%p\n%p\n", p1, p2);


	//同理 直接放入地址的字符串是不能修改的
	char* arr[] = { "hey", "world","he" };
	//排序 冒泡法
	int len = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < len -1 ; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			int k = 0;

			while (arr[j][k] && (arr[j][k] == arr[j+1][k]))
			{
				k++;//前者不是\0 且 两者相同 则下一个字符位置
			}

			//前者若先变成\0说明前者更小，不交换
			//后者若先变成\0说明后者更小，交换
			if (arr[j][k] > arr[j + 1][k])
			{
				char* temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]) ; i++)
	{
		puts(arr[i]);
	}

}