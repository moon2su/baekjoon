/*#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    int i, count = 0;

    scanf_s("%s", word);

    for (i = 0; i < strlen(word); i++) {
        count++;

        if (word[i] == '=') {
            if (word[i - 1] == 'c' || word[i - 1] == 's') {
                count--;
            }
            if (word[i - 1] == 'z') {
                count--;

                if (word[i - 2] == 'd') {
                    count--;
                }
            }
        }

        if (word[i] == '-') {
            if (word[i - 1] == 'c' || word[i - 1] == 'd') {
                count--;
            }
        }

        if (word[i] == 'j') {
            if (word[i - 1] == 'l' || word[i - 1] == 'n') {
                count--;
            }
        }
    }

    printf("%d", count);

    return 0;
}*/