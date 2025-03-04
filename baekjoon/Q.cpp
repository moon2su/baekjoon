/*#include <stdio.h>

int main() {
    char tem;
    float c, f;

    printf("온도 단위를 입력하세요 (c 또는 f): ");
    scanf_s("%c", &tem);

    if (tem == 'c') {
        printf("섭씨 온도를 입력하세요 : ");
        scanf_s("%f", &c);
        f = (c * 9 / 5) + 32;
        printf("화씨 온도 : %.2f", f);
    }

    else if (tem == 'f') {
        printf("화씨 온도를 입력하세요 : ");
        scanf_s("%f", &f);
        c = (f - 32) * 5 / 9;
        printf("섭씨 온도 : %.2f", f);
    }

    else
        printf("잘못된 단위입니다.");

    return 0;

}*/

/*#include <stdio.h>

int main() {

    int n, f;
    printf("음식 종류 : ");
    scanf_s("%d", &n);
    printf("친구 수 : ");
    scanf_s("%d", &f);

    int total = 0;

    for (int i = 0; i < n; i++) {
        int a, b;
        printf("음식 가격과 수량 : ");
        scanf_s("%d %d", &a, &b);
        int sum = a * b;
        total += sum;
    }

    printf("전체 금액 : %d \n", total);

    printf("한 명당 계산해야 할 금액 : %.2f", double(total) / f);

    return 0;
}*/

/*#include <stdio.h>

int main() {

    int i= 0, j= 0, N, arr[100];
    scanf_s("%d", &N);


    do {
        scanf_s("%d", &arr[i]);
        i++;
    } while (i < N);

    do {
        printf("%x ", arr[j]);
        j++;
    } while (j < N);

    return 0;

}*/

#include <stdio.h>

