#include<stdio.h>

int main() {

    int a,b,c,d,e,sum;

    scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);

    if(a%2==0)
        sum++;
    if( b%2==0)
        sum++;
    if(c%2==0)
        sum++;
    if(d%2==0)
        sum++;
    if(e%2==0 )
        sum++;

    printf("%d valores pares\n",sum);

    return 0;


}
