/* Ư�� ���������� ���������� �� ����

user���� ������ ����, ������ ù°��, �ڿ��� n, �ڿ��� m�� �Է¹޴´�.
(�� ������ ������ ����� �Ѵ�.) m�� n�� ���� ��ȣ�� �� ��, n + 1��° ��~ m��° ���� ���� �Ǽ������� ����Ͻÿ�. 
�Է� : 3 1 2 5
��� : 39*/

/*#include <stdio.h>

int main() {

	int d, a, n, m;
	double s;
	scanf_s("%d %d %d %d", &d, &a, &n, &m);

	s = (m * (2 * a + (m - 1) * d) / 2) - (n * (2 * a + (n - 1) * d) / 2);

	printf("%f", s);

	return 0;
}*/

//�ӱԿ� �����

/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand(time(NULL));

	while (1) {

		int com = 0, a = 0;

		com = rand() % 3;

		printf("�ȳ��� ����, ����������! (���� : 0, ���� : 1, �� : 2) \n");

		printf("> > > ");
		scanf_s("%d", &a);
		printf("��ǻ�ʹ� %d�� �½��ϴ�. \n", com);

		if (a == com)
			continue;
		
		else if (a != com) {
			printf("������� �Ѿ�ϴ�. \n");

			while (1) {

				com = rand() % 3;

				if ((a == 0 && com == 2) || (a == 1 && com == 0) || (a == 2 && com == 1)) {
					printf("����� ������ �����մϴ�. (���� : 0, ���� : 1, �� : 2) \n");

					printf("> > > ");
					scanf_s("%d", &a);
					printf("��ǻ�ʹ� %d�� �½��ϴ�. \n", com);
					
					
					if (a == com) {
						printf("����� �̰���ϴ�! \n");
						break;
					}

				}
				else if ((a == 0 && com == 1) || (a == 1 && com == 2) || (a == 2 && com == 0)) {
					printf("��ǻ�Ͱ� ������ �����մϴ�. (���� : 0, ���� : 1, �� : 2) \n");

					printf("> > > ");
					scanf_s("%d", &a);
					printf("��ǻ�ʹ� %d�� �½��ϴ�. \n", com);

					
					if (a == com) {
						printf("����� �����ϴ� �� \n");
						break;

					}
				}

				
			}
			break;
		}
	}

	return 0;

}*/

// ������ switch

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int result = -1;
	int num;

	printf("3 �̻��� ������ �Է��ϼ���: ");
	scanf("%d", &num);

	if (num >= 3) {

		switch (num % 2) {

		case 0:
			result = 0;
			break;

		case 1:
			result = 1;
			break;
		}
	}
	else {
		printf("�ٽ� �Է��ϼ���.");
	}

	if (result == 0) {
		printf("%d�� ¦���Դϴ�.", num);
	}
	else if (result == 1) {
		printf("%d�� Ȧ���Դϴ�.", num);
	}

	return 0;

}*/

// ������ ���� ���߱�

/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand(time(NULL));
	int com = rand() % 100;
	int a;

	while (1) {

		scanf_s("%d", &a);
		printf("%d \n", a);

		if (a > com)
			printf("�Էµ� ���ڰ� �������� Ů�ϴ�. \n");

		else if (a < com)
			printf("�Էµ� ���ڰ� �������� �۽��ϴ�. \n");

		else if (a == com) {
			printf("�¾ҽ��ϴ�.");
			break;
		}
	}
	return 0;

}*/

//������ *
/*#include <stdio.h>

int main() {

	int x, y;

	for (y = 1; y < 50; y *= 2) {

		for (x = 0; x < y; x++) {
			printf("*");
		}

		printf("\n");

	}

	return 0;

}*/

//������ ��������
/*#include <stdio.h>

int main() {

	int n;
	scanf_s("%d", &n);
	int arr[1000];

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int a = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = a;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	return 0;

}*/

// �ӱԿ� �ֻ���
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int N, P;
	printf("������ �� N�� �����ѹ� P�� �ۼ�");
	scanf_s("%d %d", &N, &P);
	int com = 0;
	int sum = 0;
	
	for (int i = 0; i < P; i++) {
		for (int j = 0; j == 2; j++) {
			srand(time(NULL));
			com = rand() % 6;
			sum += com;
		}
		for (int k = 0; k < N; k++) {
			printf("%d�� ������ : �ֻ��� �� ���� ���� �������ּ���.", k);

		}
	}
}*/

// ������ 4�� ���
/*#include <stdio.h>
#include <string.h>

int main() {

	char arr[10000];
	scanf_s("%s", arr, sizeof(arr));
	int n;

	n = strlen(arr);

	if (((int)arr[n - 2] * 10 + (int)arr[n - 1]) % 4 == 0)
		printf("%x", (int)arr);
	else
		printf("%o", (int)arr);

	return 0;

}*/

//������ ¦�� ��
/*#include <stdio.h>

int main() {
	
	int n, sum = 0;
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			sum += i * 2;
		}
		else {
			sum += i;
		}
	}
}*/

//�ӱԿ� 2������ȯ
/*#include <stdio.h>

int main() {
	int decimal;
	printf("10������ �Է��ϼ���: ");
	scanf("%d", &decimal);

	int binary[32];
	int i = 0;

	if (decimal == 0) {
			binary[i] = 0;
			i++;
	}
	else {
		while (decimal > 0) {
			binary[i] = decimal % 2;
			decimal /= 2;
			i++;
		}
	}

	printf("2����: ");
	if (i == 0) {
		printf("0");
	}
	else {
		for (int j = i - 1; j >= 0; j--) {
			printf("%d", binary[j]);
		}
	}
	printf("\n");

	return 0;
}*/
/*#include <stdio.h>

int main()
{
	char mode;
	int binary;

	scanf_s(" %c %d", &mode, &binary);

	if (mode == 'O')
	{
		printf("%o", binary);
	}

	else if (mode == 'H')
	{
		printf("%x", binary);
	}

	return 0;

}*/

/*#include <stdio.h>

int main()
{
	char mode;
	int binary;

	scanf_s("%c", &mode);
	scanf_s("%d", &binary);

	if (mode == 'O')
	{
		printf("%o", binary);
	}

	else if (mode == 'H')
	{
		printf("%x", binary);
	}
}*/
// ������ ��
/*#include <stdio.h>

int main() {

	int n, i, a, b, c, d, arr[] = { 500, 100, 50, 10 };

	scanf_s("%d", &n);

	a = n / arr[0];
	b = (n - (a * arr[0])) / arr[1];
	c = (n - ((a * arr[0]) + (b * arr[1]))) / arr[2];
	d = (n - ((a * arr[0]) + (b * arr[1]) + (c * arr[2]))) / arr[3];

	printf("500�� ���� = %d \n", a);
	printf("100�� ���� = %d \n", b);
	printf("50�� ���� = %d \n", c);
	printf("10�� ���� = %d \n", d);

	return 0;

}*/

/*#include <stdio.h>

int main() {

	int P, Q, R, A, B, x = 0, time = 0;
	scanf_s("%d %d %d %d %d", &P, &Q, &R, &A, &B);

	while (1) {
		if (P < x) {
			x += Q;
			x -= R;
		}
		else
			break;
	}


}*/

/*#include <stdio.h>

int main() {

	int i, j, n, sum = 0;
	scanf_s("%d", &n);

	for (i = 1; i < n + 2; i++)
		sum += i;
	for (j = n ; j > 0; j--)
		sum += j;

	printf("%d", sum);
}*/
