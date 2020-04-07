#include "stdio.h"

int main(void)
{
	const int number = 10;
	int i;
	int count[10];
	int x;

	for (i = 0; i < number; i++) {
		count[i] = 0;
	}
	scanf_s("%d", &x);
	while (x != -1) {
		if (x >= 0 && x <= 9) {
			count[x]++;
		}
		scanf_s("%d", &x);
	}
	for (i = 0; i <number; i++) {
		printf("%d:%d\t", i, count[i]);
	}
	return 0;
}