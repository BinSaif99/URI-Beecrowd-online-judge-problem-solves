#include<stdio.h>

int main() {

    int x,y,i,sum1=0,sum2=0;

    scanf("%d %d",&x,&y);

    for(i=0;i<x;i++)
    {
        if(i%2!=0)
        {
            sum1 = sum1+i;

//            printf("%d\n",i);
        }
    }

    if(y<0)
    {
        for(i=0;i>y;i--)
    {
        if(i%2!=0)
        {
            sum2 = sum2+i;
//            printf("%d\n",i);
        }
    }
    printf("%d\n",sum1+sum2);
    }

    else
    {
        for(i=0;i<y;i++)
    {
        if(i%2!=0)
        {
            sum2 = sum2+i;
//
//            printf("%d\n",i);
        }
    }
    printf("%d\n",sum1-sum2);
    }


//    printf("%d\n",sum1+sum2);
    return 0;


}
