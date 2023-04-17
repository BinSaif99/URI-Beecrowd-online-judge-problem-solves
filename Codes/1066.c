#include<stdio.h>

int main()
{


    int i,a,neg=0,pos=0,odd=0,even=0;

    for(i=0; i<=4; i++)
    {
        scanf("%d",&a);

        if(a%2==0)
        {
            even++;
        }

         if(a%2!=0)
        {
            odd++;
        }

         if(a>0)
        {
            pos++;
        }

         if(a<0)
        {
            neg++;
        }
    }

    printf("%d valor(es) par(es)\n",even);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);


    return 0;

}
