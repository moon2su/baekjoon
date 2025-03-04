/*#include <stdio.h>

int main() {

	int n, arr[100][100] = {0,}, x, y, count = 0, i, j, k; // { 0, } = 0으로 채워진 2차원 배열
	scanf_s("%d", &n);

	for (i = 0; i < n; i++) {
		scanf_s("%d %d", &x, &y);

		for (j = y; j < y + 10; j++)
			for (k = x; k < x + 10; k++)
				arr[j][k] = 1;
	}

	for (j = 0; j < 100; j++)
		for (k = 0; k < 100; k++)
			if (arr[j][k] == 1)
				count++;

	printf("%d", count);

	return 0;

}*/