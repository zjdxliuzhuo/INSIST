#include "stdio.h"

int main()
{
	int d = 0;
	printf("请输入一个正整数:");
	scanf_s("%d", &d);
	int A = d % 10;
	int B = (d / 10)%10;
	int C = d / 100;
	if (A == 0)
	{
		printf("逆序输出的整数是:\n");
		printf("%d", C);
	}
	else
	{
		printf("逆序输出的整数是:\n");
		printf("%d%d%d", A, B, C);
	}
}