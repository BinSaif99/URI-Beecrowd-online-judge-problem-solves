#include<stdio.h>
#define size 20

int main() {

    char arr1[size], arr2[size],arr3[size];

    scanf("%s %s %s", &arr1,&arr2,&arr3);


    if(arr1[0]=='v' && arr2[0]=='a' && arr3[0]=='c')
    {
        printf("aguia\n");
    }

    else if(arr1[0]=='v' && arr2[0]=='a' && arr3[0]=='o')
    {
        printf("pomba\n");
    }

    else if(arr1[0]=='v' && arr2[0]=='m' && arr3[0]=='o')
    {
        printf("homem\n");
    }

    else if(arr1[0]=='v' && arr2[0]=='m' && arr3[0]=='h')
    {
        printf("vaca\n");
    }

    else if(arr1[0]=='i' && arr2[0]=='i' && arr3[2]=='m')
    {
        printf("pulga\n");
    }

    else if(arr1[0]=='i' && arr2[0]=='i' && arr3[2]=='r')
    {
        printf("lagarta\n");
    }

    else if(arr1[0]=='i' && arr2[0]=='a' && arr3[0]=='h')
    {
        printf("sanguessuga\n");
    }

    else if(arr1[0]=='i' && arr2[0]=='a' && arr3[0]=='o')
    {
        printf("minhoca\n");
    }
    return 0;
}
