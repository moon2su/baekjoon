/*#include <stdio.h>

int main() {

    char name[51];
    char grade[3];
    double credit;

    double sumCredit = 0.0;
    double temp;
    double res = 0.0;
    for (int i = 0; i < 20; i++) {
        scanf_s("%s %lf %s", name, &credit, grade);
        if (grade[0] == 'P') continue;

        sumCredit += credit;
        if (grade[0] == 'F') continue;

        if (grade[0] == 'A') temp = 4;
        else if (grade[0] == 'B') temp = 3;
        else if (grade[0] == 'C') temp = 2;
        else temp = 1;

        if (grade[1] == '+') temp += 0.5;

        res += credit * temp;
    }

    printf("%lf", res / sumCredit);

    return 0;
}*/