#include <stdio.h>

int main()
{

    int R;
    double pi=3.14159, val=(4/3.0), sum;
    scanf("%d", &R);
    sum = val*pi*pow(R,3);
    printf("VOLUME = %.3lf\n", sum);

    return 0;

}
