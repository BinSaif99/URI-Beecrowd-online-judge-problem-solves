#include<stdio.h>

int main()
{

    double a,b,c,R1,R2,eqn;

    scanf("%lf %lf %lf", &a, &b, &c);
    eqn = (pow(b,2)-(4*a*c));
    R1 = (-b + sqrt(eqn))/(2*a);
    R2 = (-b - sqrt(eqn))/(2*a);
    if (eqn <0 || a==0)
    {
        printf("Impossivel calcular\n");
    }

    else
    {
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);

    }

    return 0;



}
