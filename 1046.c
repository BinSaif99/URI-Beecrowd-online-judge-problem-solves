#include<stdio.h>

int main() {

    int start,end,sum;

    scanf("%d %d", &start, &end);

    if(start<end)
    {
        sum = abs(start-end);
        printf("O JOGO DUROU %d HORA(S)\n",sum);
    }

    else
    {
        sum = 24-(start-end);
        printf("O JOGO DUROU %d HORA(S)\n",sum);
    }

    return 0;

}
