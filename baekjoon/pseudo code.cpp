/*#include <stdio.h>

int main() { // Find Max

	int n;
	int arr[1000];
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
		scanf_s("%d", &arr[i]);

    int max = arr[1000];

    for (int i = 0; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    printf("max = %d \n", max);

    return 0;

}*/

/*int main() { // linear search

    int arr[1000], n, i, x, x1 = 0;
    scanf_s("%d", &n);

    for (i = 0; i < n; i++)
        scanf_s("%d", &arr[i]);

    scanf_s("%d", &x);

    for (i = 1; i <= n; i++) {
        if (arr[i] == x) {
            x1 = i;
            break;
        }
    }

    if (x1 != 0)
        printf("x = %d, x는 %d번째", x, (x1+1));
    else
        printf("찾지 못했습니다.");
    
    return 0;

}*/

/*int main() { // binary search

    int i, n, arr[1000], x;
    scanf_s("%d", &n);

    for (i = 0; i < n; i++)
        scanf_s("%d", &arr[i]);



}*/