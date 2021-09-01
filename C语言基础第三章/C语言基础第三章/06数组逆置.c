#include <stdio.h>

void func_06()
{
	int a[] = { 1,2,3,4,5 };
	int i = 0;
	int j = sizeof(a) / sizeof(a[0]) - 1;

	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		printf("%d ", a[i]);
	}
	putchar('\n');

	while (i<j)
	{
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++, j--;

	}

	for (int i=0;i< sizeof(a) / sizeof(a[0]);i++)
	{
		printf("%d ", a[i]);
	}

}