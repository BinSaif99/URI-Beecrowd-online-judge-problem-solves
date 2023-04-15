#include<stdio.h>
#define size 20

int main() {

    char str[size];
    double salary, sold_value, sum ;
    fgets(str, size, stdin);
    scanf("%lf %lf", &salary, &sold_value);
    sum = (sold_value*0.15)+ salary;
    printf("TOTAL = R$ %.2lf\n", sum);

    return 0;
}
