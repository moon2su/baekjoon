#include <stdio.h>

int main() {

	int arr[9][9], i, j, max = 0, row = 1, column = 1;
	for(i = 0; i < 9; i++)
		for (j = 0; j < 9; j++) {
			scanf("%d", &arr[i][j]);
			if (max < arr[i][j]) {
				max = arr[i][j];
				row = i + 1;
				column = j + 1;
			}
		}

	printf("%d \n%d %d", max, row, column);
	return 0;
}