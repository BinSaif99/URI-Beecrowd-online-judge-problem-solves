#include<stdio.h>

int main()
{

    double x1,x2,y1,y2,sum,temp1,temp2;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    temp1 = x2-x1;
    temp2 = y2-y1;
    sum = sqrt (pow(temp1,2) + pow(temp2,2));

    printf("%.4lf\n", sum);

    return 0;



}
