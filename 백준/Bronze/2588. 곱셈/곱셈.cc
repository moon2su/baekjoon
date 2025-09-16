#include <stdio.h>

int main() {
	int a, b;

	scanf("%d \n %d", &a, &b);

	int c = a * (b % 10);
	int d = a * (b / 10 % 10);
	int e = a * (b / 100);

	printf("%d\n", c);
	printf("%d\n", d);
	printf("%d\n", e);
	printf("%d\n", e * 100 + d * 10 + c);

	return 0;
}