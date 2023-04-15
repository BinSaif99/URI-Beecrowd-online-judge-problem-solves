#include<stdio.h>

int main() {

    double salary,sum;

    scanf("%lf", &salary);

    if(salary>=0 && salary<=400.00)
    {
        sum = 0.15*salary;
        printf("Novo salario: %.2lf\n",(sum+salary));
        printf("Reajuste ganho: %.2lf\n", sum);
        printf("Em percentual: 15 %c\n",37);
    }

    else if(salary>=400.01 && salary<=800.00)
    {
        sum = 0.12*salary;
        printf("Novo salario: %.2lf\n",(sum+salary));
        printf("Reajuste ganho: %.2lf\n", sum);
        printf("Em percentual: 12 %c\n",37);
    }

    else if(salary>=800.01 && salary<=1200.00)
    {
        sum = 0.1*salary;
        printf("Novo salario: %.2lf\n",(sum+salary));
        printf("Reajuste ganho: %.2lf\n", sum);
        printf("Em percentual: 10 %c\n",37);
    }

    else if(salary>=1200.01 && salary<=2000.00)
    {
        sum = 0.07*salary;
        printf("Novo salario: %.2lf\n",(sum+salary));
        printf("Reajuste ganho: %.2lf\n", sum);
        printf("Em percentual: 7 %c\n",37);
    }

    else
    {
        sum = 0.04*salary;
        printf("Novo salario: %.2lf\n",(sum+salary));
        printf("Reajuste ganho: %.2lf\n", sum);
        printf("Em percentual: 4 %c\n",37);
    }


    return 0;

} /*Here line numbers 14,22,30,38,46
   we can't print "%" directly , so i used ASCII value to print "%" sign
   you can also use %% instead of it
  as example : printf("Em percentual: 7 %%\n");*/


