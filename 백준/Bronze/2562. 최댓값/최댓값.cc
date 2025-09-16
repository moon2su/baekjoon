#include <stdio.h>

int main() {

	int n;
	int max = 0;
	int maxi = 0;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &n);
		if (n > max) {
			max = n;
			maxi = i + 1;
		}
	}
	
	printf("%d \n%d", max, maxi);

	return 0;

}