#include<stdio.h>

int main(){

    float x,y,z;

    scanf("%f %f", &x,&y);

    if (x==1)
    {
        z = 4.00*y;
        printf("Total: R$ %.2f\n", z);
    }

    else if(x==2)
    {
        z = 4.50*y;
        printf("Total: R$ %.2f\n",z);
    }

    else if(x==3)
    {
        z = 5.00*y;
        printf("Total: R$ %.2f\n",z);
    }

    else if(x==4)
    {
        z = 2.00*y;
        printf("Total: R$ %.2f\n", z);
    }
    else
    {
        z = 1.50*y;
        printf("Total: R$ %.2f\n", z);
    }

    return 0;
}
