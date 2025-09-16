#include <stdio.h>
#include <string.h>

int main(void)
{
	int size, i, B;
	char N[31];
	int sum = 0, bi = 1;

	scanf("%s %d", N, &B);
	size = strlen(N);
	for (i = size - 1; i >= 0; i--, bi *= B)
	{
		if ('0' <= N[i] && N[i] <= '9')
			sum += bi * (N[i] - '0');
		else if ('A' <= N[i] && N[i] <= 'Z')
			sum += bi * (10 + N[i] - 'A');
	}

	printf("%d", sum);
	return 0;
}