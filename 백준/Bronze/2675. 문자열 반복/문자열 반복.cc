#include <stdio.h>
#include <string.h>

int main() {

	int T, R;
	scanf("%d", &T);
	char S[20];

	for (int i = 0; i < T; i++) {
		scanf("%d %s", &R, S);

		for(int k = 0; k < strlen(S); k++)
			for	(int j = 0; j < R; j++)
				printf("%c", S[k]);
		printf("\n");
	}

	return 0;

}