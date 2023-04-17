#include<stdio.h>

int main()
{

    double a,b,c,tempA,tempB,tempC;

    scanf("%lf %lf %lf", &a,&b,&c);

    if(a>=b && a>=c)
    {
        tempA=a;
        if(b>=c)
        {
            tempB=b;
            tempC=c;
        }
        else
        {
            tempB=c;
            tempC=b;
        }
    }

    else if(b>=a && b>=c)
    {
        tempA=b;
        if(a>=c)
        {
            tempB=a;
            tempC=c;
        }
        else
        {
            tempC=c;
            tempB=a;
        }
    }

    else if(c>=a && c>=b)
    {
        tempA=c;
        if(a>=b)
        {
            tempB=a;
            tempC=b;
        }
        else
        {
            tempB=b;
            tempC=a;
        }
    }


    if(tempA>=tempB+tempC)
    {
        printf("NAO FORMA TRIANGULO\n");
    }

    else if(pow(tempA,2)==(tempB*tempB)+(tempC*tempC))
    {
        printf("TRIANGULO RETANGULO\n");
    }

    else if(pow(tempA,2)>(tempB*tempB)+(tempC*tempC))
    {
        printf("TRIANGULO OBTUSANGULO\n");

        if(tempA==tempB && tempB==tempC && tempA==tempC)
        {
            printf("TRIANGULO EQUILATERO\n");
        }

        else if((a==b&&b!=c)||(b==c&&b!=a)||(a==c&&a!=b))
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    else if(pow(tempA,2)<(tempB*tempB)+(tempC*tempC))
    {
        printf("TRIANGULO ACUTANGULO\n");

        if(tempA==tempB && tempB==tempC && tempA==tempC)
        {
            printf("TRIANGULO EQUILATERO\n");
        }

        else if((a==b&&b!=c)||(b==c&&b!=a)||(a==c&&a!=b))
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }



    return 0;

}
