/*#include <stdio.h>

int main() {
    char tem;
    float c, f;

    printf("�µ� ������ �Է��ϼ��� (c �Ǵ� f): ");
    scanf_s("%c", &tem);

    if (tem == 'c') {
        printf("���� �µ��� �Է��ϼ��� : ");
        scanf_s("%f", &c);
        f = (c * 9 / 5) + 32;
        printf("ȭ�� �µ� : %.2f", f);
    }

    else if (tem == 'f') {
        printf("ȭ�� �µ��� �Է��ϼ��� : ");
        scanf_s("%f", &f);
        c = (f - 32) * 5 / 9;
        printf("���� �µ� : %.2f", f);
    }

    else
        printf("�߸��� �����Դϴ�.");

    return 0;

}*/

/*#include <stdio.h>

int main() {

    int n, f;
    printf("���� ���� : ");
    scanf_s("%d", &n);
    printf("ģ�� �� : ");
    scanf_s("%d", &f);

    int total = 0;

    for (int i = 0; i < n; i++) {
        int a, b;
        printf("���� ���ݰ� ���� : ");
        scanf_s("%d %d", &a, &b);
        int sum = a * b;
        total += sum;
    }

    printf("��ü �ݾ� : %d \n", total);

    printf("�� ��� ����ؾ� �� �ݾ� : %.2f", double(total) / f);

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

