/*#include <stdio.h>
#include <string.h>

int stack[100001];
int topp = -1;

void push(int data) {
    topp++;
    stack[topp] = data;
}
void pop() {
    if (topp >= 0) {
        printf("%d\n", stack[topp]);
        stack[topp] = NULL;
        topp--;
    }
    else
        printf("-1\n");
}
void size() {
    printf("%d\n", topp + 1);
}
void empty() {
    if (topp == -1)
        printf("1\n");
    else
        printf("0\n");
}
void top() {
    if (topp >= 0)
        printf("%d\n", stack[topp]);
    else
        printf("-1\n");

}

int main() {
    int N, i, X;
    char com[5];
    scanf_s("%d", &N);
    for (i = 0; i < N; i++) {
        scanf_s("%s", com, sizeof(com));
        if (strcmp(com, "push") == 0) {
            scanf_s("%d", &X);
            push(X);
        }
        else if (strcmp(com, "pop") == 0) {
            pop();
        }
        else if (strcmp(com, "size") == 0) {
            size();
        }
        else if (strcmp(com, "empty") == 0) {
            empty();
        }
        else if (strcmp(com, "top") == 0) {
            top();
        }
    }

    return 0;
}*/