#include <stdio.h>
#include <string.h>

int main() {

	char A[15];
	int count = 0;
	scanf("%s", A);

	for (int i = 0; i < strlen(A); i++) {
		if (A[i] >= 65 && A[i] <= 67)
			count += 3;
		if (A[i] >= 68 && A[i] <= 70)
			count += 4;
		if (A[i] >= 71 && A[i] <= 73)
			count += 5;
		if (A[i] >= 74 && A[i] <= 76)
			count += 6;
		if (A[i] >= 77 && A[i] <= 79)
			count += 7;
		if (A[i] >= 80 && A[i] <= 83)
			count += 8;
		if (A[i] >= 84 && A[i] <= 86)
			count += 9;
		if (A[i] >= 87 && A[i] <= 90)
			count += 10;
	}

	printf("%d", count);

	return 0;

}