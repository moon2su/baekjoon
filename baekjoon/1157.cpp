/*#include <stdio.h>
#include <string.h>

int main() {

	char arr[1000000], cnt;
	scanf_s("%s", arr);

	int len, i, j, max = 0, alp[26];
	len = strlen(arr);

	for (i = 0; i < len; i++)
		if (arr[i] >= 'a')
			alp[arr[i] - 'a']++;
		else
			alp[arr[i] - 'A']++;

	for (i = 0; i < 26; i++)
		if (alp[i] == max)
			cnt = '?';
		else if (alp[i] > max) {
			max = alp[i];
			cnt = 'A' + i;
		}

	printf("%c", cnt);

	return 0;

}*/