#include<stdio.h>

int main() {

    double a,b,c,sum1,sum2,sum3,sum4,sum5;
    scanf("%lf %lf %lf", &a, &b, &c);

    sum1= 0.5*a*c;
    sum2= 3.14159*pow(c,2);
    sum3= 0.5*(a+b)*c;
    sum4= pow(b,2);
    sum5= a*b;
    printf("TRIANGULO: %.3lf\n", sum1);
    printf("CIRCULO: %.3lf\n", sum2);
    printf("TRAPEZIO: %.3lf\n", sum3);
    printf("QUADRADO: %.3lf\n", sum4);
    printf("RETANGULO: %.3lf\n", sum5);

    return 0;


}
