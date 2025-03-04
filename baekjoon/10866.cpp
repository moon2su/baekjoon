#include <stdio.h>
#include <string.h>

int D[100001];
int frontt = 0;
int backk = 0;
int cnt = 0;

void push_front(int data);
void push_back(int data);
void pop_front();
void pop_back();
void size();
void empty();
void front();
void back();

void push_front(int data) {
	for (int k = cnt; k > 0; k--)
		D[k] = D[k - 1];
	D[0] = data;
	cnt++;
}
void push_back(int data) {
	D[backk++] = data;
	cnt++;
}
void pop_front() {
	if (cnt == 0)
		printf("-1\n");
	else {
		printf("%d\n", D[0]);
		for (int j = 0; j < cnt - 1; j++) {
			D[j] = D[j + 1];
		}
		cnt--;
	}
}
void pop_back() {
	if (cnt == 0)
		printf("-1\n");
	else {
		printf("%d\n", D[--backk]);
		cnt--;
	}
}
void size() {
	printf("%d\n", cnt);
}
void empty() {
	if (cnt == 0) {
		printf("1\n");
	}
	else
		printf("0\n");
}
void front() {
	if (cnt == 0) {
		printf("-1\n");
	}
	else
		printf("%d\n", D[0]);
}
void back() {
	if (cnt == 0) {
		printf("-1\n");
	}
	else
		printf("%d\n", D[cnt - 1]);
}
int main() {
	int X, i, N;
	char com[8];
	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%s", com);

		if (strcmp(com, "push_front") == 0) {
			scanf("%d", &X);
			push_front(X);
		}
		else if (strcmp(com, "push_back") == 0) {
			scanf("%d", &X);
			push_back(X);
		}
		else if (strcmp(com, "pop_front") == 0)
			pop_front();
		else if (strcmp(com, "pop_back") == 0)
			pop_back();
		else if (strcmp(com, "size") == 0)
			size();
		else if (strcmp(com, "empty") == 0)
			empty();
		else if (strcmp(com, "front") == 0)
			front();
		else if (strcmp(com, "back") == 0)
			back();

	}

	return 0;

}