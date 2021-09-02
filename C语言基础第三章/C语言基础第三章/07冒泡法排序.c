#include <stdio.h>

void func_07()
{
	int a[] = { 2,6,1,8,9,3,4,7,5 };
	int len = sizeof(a) / sizeof(a[0]);

	int i=0,j=0;

	for (;i<len;i++)
	{
		for (j=0;j<len-i-1;j++)
		{
			if (a[j] > a[j + 1]) //大于号小于号改变可以改变排序的升降序
			{
				int temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}
	}

	for (i=0;i<len;i++)
	{
		printf("%d ", a[i]);
	}

}
