#include <stdio.h>
#include <string.h>

int main() {

	char S[1000000];
	int i = 0, cnt = 0, len;

	scanf("%[^\n]", S); // 엔터가 나올때까지 문자열로 받는다는 말
	len = strlen(S);

	if (len == 1) {
		if (S[i] == ' ') {
			printf("0 \n");
			return 0;
		}
	}

	for (i = 1; i < len - 1; i++) {
		if (S[i] == ' ') {
			cnt++;
		}
	}

	printf("%d", cnt + 1);

	return 0;

}