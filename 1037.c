#include<stdio.h>

int main(){

    float num;
    int num1,num2;

    scanf("%f",&num);
    num2 = num*100;
    num1 = num;

    if (num<0 || num>100.00)
    {
        printf("Fora de intervalo\n");
    }

    else
    {
        if(num2%100==0)
        {
            if(num1==100)
            {
                printf("Intervalo (%d,%d]\n",num1-25,num1);
            }
            else
            {
                printf("Intervalo [%d,%d]\n",num1-25,num1);
            }

        }
        else
        {
            printf("Intervalo (%d,%d]\n",num1,num1+25);
        }
    }

    return 0;


}
