//#include<stdio.h>
//
//int main() {
//
//    int a;
//
//    scanf("%d",&a);
//
//    printf("1 x %d = %d\n",a,(a*1));
//    printf("2 x %d = %d\n",a,(a*2));
//    printf("3 x %d = %d\n",a,(a*3));
//    printf("4 x %d = %d\n",a,(a*4));
//    printf("5 x %d = %d\n",a,(a*5));
//    printf("6 x %d = %d\n",a,(a*6));
//    printf("7 x %d = %d\n",a,(a*7));
//    printf("8 x %d = %d\n",a,(a*8));
//    printf("9 x %d = %d\n",a,(a*9));
//    printf("10 x %d = %d\n",a,(a*10));
//
//    return 0;
//
//
//
//}

#include <stdio.h>
int main()
{
    int i,N;
    scanf("%d", &N);
    for(i = 1;i < 11;i++){
        printf("%d x %d = %d\n", i, N, N*i);
    }
    return 0;
}
