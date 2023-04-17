#include<stdio.h>

int main() {


    double a,sum;
    int i,pos=0;

    for(i=0;i<=5;i++)
    {
        scanf("%lf",&a);

        if(a>0)
        {
            sum = sum+a;
            pos++;
        }
    }

    printf("%d valores positivos\n",pos);
    printf("%.1lf\n",(sum/pos));

    return 0;


}
