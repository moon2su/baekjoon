/*#include <stdio.h>
int stack[1000001] = {};
int top = -1;

void push(int data) {
    top++;
    stack[top] = data;
}

void pop() {
    int a;

    if (top >= 0) {
        printf("%d\n", stack[top]);
        top--;
    }
    else
        printf("%d\n", -1);
}

int main() {
    int N, i, com, data;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &com);
        switch (com) {
        case 1:
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3:
            printf("%d\n", top + 1);
            break;
        case 4:
            if (top == -1) {
                printf("%d\n", 1);
            }
            else {
                printf("%d\n", 0);
            }
            break;
        case 5:
            if (top == -1) {
                printf("%d\n", -1);
            }
            else {
                printf("%d\n", stack[top]);
            }
            break;
        }
    }

    return 0;

}*/