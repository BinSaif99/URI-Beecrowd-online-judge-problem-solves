#include<stdio.h>

int main() {


    int n,i;
    double x,y,z,sum;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%lf %lf %lf",&x,&y,&z);

        sum = ((x/10)*2)+((y/10)*3)+((z/10)*5);

        printf("%.1lf\n",sum);

    }

    return 0;
}
