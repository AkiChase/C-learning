#include <stdio.h>

void func_08() {
	// 类型 名[行][列]={{值},{值}}
	//列一定不能省略（只有第一个(行)能省略）
	int arr[][3] =
	{
		{1,2,3},
		{4,5,6},
		{7}
	};
	//	{1, 2, 3,4,5,6};这样其实也得到一样的结果，只是代码不方便查看

	//行数
	int row = sizeof(arr) / sizeof(arr[0]);
	//列数
	int col = sizeof(arr[0]) / sizeof(arr[0][0]);
	printf("arr 有%d行，%d列\n", row, col);

	for (int i=0;i<row;i++)
	{
		for (int j=0;j<col;j++)
		{
			printf("%d ", arr[i][j]);
		}
		putchar('\n');
	}

	printf("%p\n", &arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0][0]);
	//地址都一样（类似一维的，也都直接连续）
}