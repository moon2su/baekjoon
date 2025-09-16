#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100001

int Queue[MAX_SIZE];
int frontt = 0;
int backk = 0;

void push(int data);
void pop();
void size();
void empty();
void front();
void back();

int main() {
    int N, i, X;
    char com[6];
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%s", com);
        if (strcmp(com, "push") == 0) {
            scanf("%d", &X);
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
        else if (strcmp(com, "front") == 0) {
            front();
        }
        else if (strcmp(com, "back") == 0) {
            back();
        }
    }

    return 0;
}

void push(int data) {
    Queue[backk++] = data;
}

void pop() {
    if (frontt == backk) {
        printf("-1\n");
    }
    else {
        printf("%d\n", Queue[frontt++]);
    }
}

void size() {
    printf("%d\n", backk - frontt);
}

void empty() {
    if (frontt == backk)
        printf("1\n");
    else
        printf("0\n");
}

void front() {
    if (frontt == backk) {
        printf("-1\n");
    }
    else {
        printf("%d\n", Queue[frontt]);
    }
}

void back() {
    if (frontt == backk) {
        printf("-1\n");
    }
    else {
        printf("%d\n", Queue[backk - 1]);
    }
}