#include <stdio.h>

void func_08() {
	// ���� ��[��][��]={{ֵ},{ֵ}}
	//��һ������ʡ�ԣ�ֻ�е�һ��(��)��ʡ�ԣ�
	int arr[][3] =
	{
		{1,2,3},
		{4,5,6},
		{7}
	};
	//	{1, 2, 3,4,5,6};������ʵҲ�õ�һ���Ľ����ֻ�Ǵ��벻����鿴

	//����
	int row = sizeof(arr) / sizeof(arr[0]);
	//����
	int col = sizeof(arr[0]) / sizeof(arr[0][0]);
	printf("arr ��%d�У�%d��\n", row, col);

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
	//��ַ��һ��������һά�ģ�Ҳ��ֱ��������
}