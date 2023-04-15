#include <stdio.h>

int main() {

    int num;
    double hour, salary, sum;
    scanf("%d %lf %lf", &num, &hour, &salary);
    sum = (hour*salary);
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2lf\n", sum);
    return 0;
}
