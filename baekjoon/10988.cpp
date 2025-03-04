/*#include <stdio.h>
#include <string.h>

int main() {

	char word[101];
	scanf_s("%s", word);

	int rst = 1;

	for (int i = 0; i < (strlen(word) / 2); i++) {
		if (word[i] != word[strlen(word) - 1 - i]) {
			rst = 0;
			break;
		}
	}
	
	printf("%d", rst);

	return 0;

}*/