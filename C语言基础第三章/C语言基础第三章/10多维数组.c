#include <stdio.h>

void func_10()
{
	//����ά
	//�� �� ��
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

	//��СΪ 4*2*3*4
	//���� ���� ������ͬ��ά
}