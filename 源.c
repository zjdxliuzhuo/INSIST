#include "stdio.h"

int main()
{
	int d = 0;
	printf("������һ��������:");
	scanf_s("%d", &d);
	int A = d % 10;
	int B = (d / 10)%10;
	int C = d / 100;
	if (A == 0)
	{
		printf("���������������:\n");
		printf("%d", C);
	}
	else
	{
		printf("���������������:\n");
		printf("%d%d%d", A, B, C);
	}
}