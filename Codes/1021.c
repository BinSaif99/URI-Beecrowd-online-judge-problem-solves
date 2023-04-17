#include<stdio.h>


int main()
{

    double x;
    int sum,note,coin;

    printf("NOTAS:\n");

    scanf("%lf", &x);
    note = x;

    printf("%d nota(s) de R$ 100.00\n", note/100);
    sum = note%100;
    printf("%d nota(s) de R$ 50.00\n", sum/50);
    sum = sum%50;
    printf("%d nota(s) de R$ 20.00\n", sum/20);
    sum = sum%20;
    printf("%d nota(s) de R$ 10.00\n", sum/10);
    sum = sum%10;
    printf("%d nota(s) de R$ 5.00\n", sum/5);
    sum = sum%5;
    printf("%d nota(s) de R$ 2.00\n", sum/2);


    printf("MOEDAS:\n");
    sum = sum%2;
    printf("%d moeda(s) de R$ 1.00\n", sum/1);
    coin = x*100;
    coin = coin%100;
    printf("%d moeda(s) de R$ 0.50\n", coin/50);
    coin = coin%50;
    printf("%d moeda(s) de R$ 0.25\n", coin/25);
    coin = coin%25;
    printf("%d moeda(s) de R$ 0.10\n", coin/10);
    coin = coin%10;
    printf("%d moeda(s) de R$ 0.05\n", coin/5);
    coin = coin%5;
    printf("%d moeda(s) de R$ 0.01\n", coin/1);

    return 0;


}
