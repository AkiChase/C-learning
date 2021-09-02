#include <stdio.h>

void func_10()
{
	//如三维
	//层 行 列
	int arr[2][3][4] = {1,2,3,4,5};
	for (int i=0; i<2; i++)
	{
		for (int j=0; j<3; j++)
		{
			for (int k=0; k<4; k++)
			{
				printf("%d ", arr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}

	//大小为 4*2*3*4
	//层数 行数 列数求法同二维
}