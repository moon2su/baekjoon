/*#include <stdio.h>
#include <string.h>

int main() {

    int N, ans = 0;
    char name1[21], name2[21];
    const char* vir;

    scanf_s("%d", &N);

    vir = "ChongChong";

    for (int i = 0; i < N; i++) {
        scanf_s("%s %s", name1, sizeof(name1), name2, sizeof(name2));
        if (strcmp(vir, name1) == 0 || strcmp(vir, name2) == 0) {
            ans += N - i + 1;
            
        }
    }

    printf("%d", ans);

    return 0;

}*/