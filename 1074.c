#include<stdio.h>

int main()
{

    int n,x,i,count=0;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%d",&x);

        if(x%2==0 && x>0)
            printf("EVEN POSITIVE\n");

        else if(x%2==0 && x<0)
            printf("EVEN NEGATIVE\n");

        else if(x%2!=0 && x>0)
            printf("ODD POSITIVE\n");

        else if(x%2!=0 && x<0)
            printf("ODD NEGATIVE\n");

        else if(x==0)
            printf("NULL\n");

    }

    return 0;

}
