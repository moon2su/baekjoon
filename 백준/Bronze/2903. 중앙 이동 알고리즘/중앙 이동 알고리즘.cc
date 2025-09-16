#include <stdio.h>
#include <math.h>

int main() {

	int N, cnt = 2, res = 0, i;
	scanf("%d", &N);

	for (i = 1; i <= N; i++)
		res = pow((pow(cnt, i) + 1), 2);

	printf("%d", res);

	return 0;
}