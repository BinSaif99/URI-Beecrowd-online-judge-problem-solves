#include<stdio.h>

int main()
{

    int time,hour, min, sec;

    scanf("%d", &time);

    hour = time/3600;
    min = (time/60) - (hour*60);
    sec = time%60;

    printf("%d:%d:%d\n", hour,min,sec);
    return 0;




}
