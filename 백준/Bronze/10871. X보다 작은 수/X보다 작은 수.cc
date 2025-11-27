#include <stdio.h>

int main() {

	int N, X;
	int A[10000];

	scanf("%d %d", &N, &X);

	for (int i = 0; i < N; i++)
		scanf("%d", &A[i]);

	for (int j = 0; j < N; j++) {
		if (X > A[j])
			printf("%d ", A[j]);
	}

	return 0;

}