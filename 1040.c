#include<stdio.h>

int main() {

    double n1,n2,n3,n4,exam,avg;

    scanf("%lf %lf %lf %lf", &n1,&n2,&n3,&n4);

    avg = ((n1/10*2)+(n2/10*3)+(n3/10*4)+(n4/10*1));

    printf("Media: %.1lf\n", avg);

    if(avg>=7.0)
    {
        printf("Aluno aprovado.\n");
    }

    else if(avg<5.0)
    {
        printf("Aluno reprovado.\n");
    }

    else if(avg>=5.0 && avg<=6.9)
    {
        if(avg>=5.0)
        {
            printf("Aluno em exame.\n");
            scanf("%lf",&exam);
            printf("Nota do exame: %.1lf\n", exam);
            avg = ((avg+exam)/2);

            if (avg>=5.0)
            {
                printf("Aluno aprovado.\n");
                printf("Media final: %.1lf\n",avg);
            }
            else if(avg<=4.9)
            {
                printf("Aluno reprovado.\n");
                printf("Media final: %.1lf\n",avg);
            }
        }

        else
        {
            printf("Aluno em exame.\n");
        }
    }

    return 0;


}
