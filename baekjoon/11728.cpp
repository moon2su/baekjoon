/*#include <stdio.h>

int main() {

	int A[1000000], B[1000000], C[1000000], N, M;
	scanf_s("%d %d", &N, &M);

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &A[i]);
	}

	for (int i = 0; i < M; i++) {
		scanf_s("%d", &B[i]);
	}

	int i = 0, j = 0, k = 0;
	while (i < N && j < M) {
		if (A[i] > B[j]) {
			C[k] = B[j];
			k++;
			j++;
		}
		else {
			C[k] = A[i];
			k++;
			i++;
		}
	}
	while (i < N) {
		C[k] = A[i];
		k++;
		i++;
	}
	while (j < M) {
		C[k] = B[j];
		k++;
		j++;
	}

	for (int l = 0; l < k; l++)
		printf("%d ", C[l]);

	printf("\n");

	return 0;

}*/