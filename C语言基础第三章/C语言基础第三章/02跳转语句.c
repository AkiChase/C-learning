#include <stdio.h>
/*
break
continue

goto ��� (û��gosub)
����������һ��ѭ����Ͳ�������������
*/

//ʹ��goto������ѭ��
/*
FLAG:
	printf("���2\n");
goto FLAG;
*/

void func_02()
{
	printf("���1\n");
	goto FLAG;
	printf("���2\n");
FLAG:
	printf("���3\n");
}
