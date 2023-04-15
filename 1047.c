#include<stdio.h>

int main(){

    int ih,im,fh,fm,sum;

    scanf("%d %d %d %d",&ih,&im,&fh,&fm);

    sum = ((fh*60)+fm)-((ih*60)+im);

    if(sum<=0)
    {
        sum = sum + (24*60);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(sum/60),(sum%60));
    }

    else
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(sum/60),(sum%60));
    }
    return 0;
}
