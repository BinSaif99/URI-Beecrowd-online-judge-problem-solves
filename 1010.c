#include<stdio.h>

int main() {

    int x,y;
    double price, sum;

    scanf("%d %d %lf", &x, &y, &price);
    sum = y*price;

    scanf("%d %d %lf", &x, &y, &price);
    sum += y*price;

    printf("VALOR A PAGAR: R$ %.2lf\n", sum);

    return 0;


}
