/*#include <stdio.h>
#include <string.h>

int main() {

	int i, j;
	char arr[10], a;
	scanf_s("%s", arr);

	for (i = 0; i < strlen(arr); i++) {
		for (j = 0; j < strlen(arr) - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				a = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = a;
			}
		}
	}

	printf("%s", arr);

	return 0;

}*/