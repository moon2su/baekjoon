/* 특정 범위에서의 등차수열의 합 계산기

user에게 정수인 등차, 정수인 첫째항, 자연수 n, 자연수 m을 입력받는다.
(각 변수의 구분은 띄어쓰기로 한다.) m과 n을 항의 번호라 할 때, n + 1번째 항~ m번째 항의 합을 실수형으로 출력하시오. 
입력 : 3 1 2 5
출력 : 39*/

/*#include <stdio.h>

int main() {

	int d, a, n, m;
	double s;
	scanf_s("%d %d %d %d", &d, &a, &n, &m);

	s = (m * (2 * a + (m - 1) * d) / 2) - (n * (2 * a + (n - 1) * d) / 2);

	printf("%f", s);

	return 0;
}*/

//임규연 묵찌빠

/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand(time(NULL));

	while (1) {

		int com = 0, a = 0;

		com = rand() % 3;

		printf("안내면 진다, 가위바위보! (가위 : 0, 바위 : 1, 보 : 2) \n");

		printf("> > > ");
		scanf_s("%d", &a);
		printf("컴퓨터는 %d을 냈습니다. \n", com);

		if (a == com)
			continue;
		
		else if (a != com) {
			printf("묵찌빠로 넘어갑니다. \n");

			while (1) {

				com = rand() % 3;

				if ((a == 0 && com == 2) || (a == 1 && com == 0) || (a == 2 && com == 1)) {
					printf("당신이 공격을 진행합니다. (가위 : 0, 바위 : 1, 보 : 2) \n");

					printf("> > > ");
					scanf_s("%d", &a);
					printf("컴퓨터는 %d을 냈습니다. \n", com);
					
					
					if (a == com) {
						printf("당신이 이겼습니다! \n");
						break;
					}

				}
				else if ((a == 0 && com == 1) || (a == 1 && com == 2) || (a == 2 && com == 0)) {
					printf("컴퓨터가 공격을 진행합니다. (가위 : 0, 바위 : 1, 보 : 2) \n");

					printf("> > > ");
					scanf_s("%d", &a);
					printf("컴퓨터는 %d을 냈습니다. \n", com);

					
					if (a == com) {
						printf("당신이 졌습니다 ㅠ \n");
						break;

					}
				}

				
			}
			break;
		}
	}

	return 0;

}*/

// 정예지 switch

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int result = -1;
	int num;

	printf("3 이상의 정수를 입력하세요: ");
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
		printf("다시 입력하세요.");
	}

	if (result == 0) {
		printf("%d는 짝수입니다.", num);
	}
	else if (result == 1) {
		printf("%d는 홀수입니다.", num);
	}

	return 0;

}*/

// 한은진 난수 맞추기

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
			printf("입력된 숫자가 난수보다 큽니다. \n");

		else if (a < com)
			printf("입력된 숫자가 난수보다 작습니다. \n");

		else if (a == com) {
			printf("맞았습니다.");
			break;
		}
	}
	return 0;

}*/

//정예지 *
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

//한은진 오름차순
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

// 임규연 주사위
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int N, P;
	printf("참여자 수 N과 루프넘버 P를 작성");
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
			printf("%d번 참여자 : 주사위 눈 수의 합을 유추해주세요.", k);

		}
	}
}*/

// 한은진 4의 배수
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

//정예지 짝수 곱
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

//임규연 2진수변환
/*#include <stdio.h>

int main() {
	int decimal;
	printf("10진수를 입력하세요: ");
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

	printf("2진수: ");
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
// 정예지 돈
/*#include <stdio.h>

int main() {

	int n, i, a, b, c, d, arr[] = { 500, 100, 50, 10 };

	scanf_s("%d", &n);

	a = n / arr[0];
	b = (n - (a * arr[0])) / arr[1];
	c = (n - ((a * arr[0]) + (b * arr[1]))) / arr[2];
	d = (n - ((a * arr[0]) + (b * arr[1]) + (c * arr[2]))) / arr[3];

	printf("500원 갯수 = %d \n", a);
	printf("100원 갯수 = %d \n", b);
	printf("50원 갯수 = %d \n", c);
	printf("10원 갯수 = %d \n", d);

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
