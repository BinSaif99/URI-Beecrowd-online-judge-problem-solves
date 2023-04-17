//#include<stdio.h>

//int main()
//{
//
//    int h, hh, hr,m,mm,d,dm,s,ss;
//
//    scanf("Dia %d",&d);
//    scanf("%d : %d : %d\n",&h,&m,&s);
//    scanf("Dia %d",&dm);
//    scanf("%d : %d : %d",&hh,&mm,&ss);
//
//    s = ss - s;
//    m = mm - m;
//    h = hh - h;
//    d = dm - d;
//
//    if(s<0)
//    {
//        s+=60;
//        m--;
//    }
//
//    if(m<0)
//    {
//        m+=60;
//        h--;
//    }
//
//    if(h<0)
//    {
//        h+=24;
//        d--;
//    }
//
//    printf("%d dia(s)\n", d);
//    printf("%d hora(s)\n", h);
//    printf("%d minuto(s)\n", m);
//    printf("%d segundo(s)\n", s);
//
//
//    return 0;
//







#include<stdio.h>

int main() {

    int day,hour1,min1,sec1,hour2,min2,sec2,sum,hour;
    int start;
    int end;

    scanf("Dia %d",&start);
    scanf("%d : %d : %d\n", &hour1,&min1,&sec1);

    scanf("Dia %d",&end);
    scanf("%d : %d : %d", &hour2,&min2,&sec2);

    sum = ((hour2*3600)+sec2)-((hour1*3600)+sec1);
    day = end - start;
    if(sum<=0)
    {
        sum = sum + (24*3600);
        hour = hour2-hour1;
        if(hour<0)
        {
            day--;
        }
        printf("%d dia(s)\n", day);
        printf("%d hora(s)\n", sum/3600);
        printf("%d minuto(s)\n", min2-min1);
         printf("%d segundo(s)\n", sum%3600);
    }

    else
    {
        hour = hour2-hour1;
        if(hour<0)
        {
            day--;
        }
        printf("%d dia(s)\n", day);
        printf("%d hora(s)\n", sum/3600);
        printf("%d minuto(s)\n", min2-min1);
         printf("%d segundo(s)\n", sum%3600);
    }

    return 0;



}



