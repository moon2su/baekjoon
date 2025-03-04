/*#include <stdio.h>
int stack[100001];
int top = -1;

void push(int data) {
    top++;
    stack[top] = data;
}
void pop() {
    stack[top] = 0;
    top--;
}

int main() {
    int K, data, sum = 0;
    scanf("%d", &K);
    for (int i = 0; i < K; i++) {
        scanf("%d\n", &data);
        if (data == 0) {
            pop();
        }
        else
            push(data);
    }
    for (int i = 0; i <= top; i++) {
        sum = sum + stack[i];
    }
    printf("%d", sum);
    return 0;
}*/