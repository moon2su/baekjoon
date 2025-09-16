#include <stdio.h>

int main() {

	int i, j, N, arr[1000], a = 0;
	scanf("%d", &N);

	for (i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	for (i = 0; i < N; i++) {
		for (j = 0; j < N - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				a = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = a;
			}
		}
	}

	for (i = 0; i < N; i++)
		printf("%d\n", arr[i]);

	return 0;
	
}