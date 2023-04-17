#include<stdio.h>

int main()
{

    double distance, spent_fuel,sum;

    scanf("%lf %lf", &distance, &spent_fuel);
    sum = distance/spent_fuel;

    printf("%.3lf km/l\n", sum);

    return 0;


}
