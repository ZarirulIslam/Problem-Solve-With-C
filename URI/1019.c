#include<stdio.h>
int main()
{
    int hours,min,sec;

    scanf("%d",&sec);

    hours=sec/3600;
    sec-=hours*3600;

    min=sec/60;
    sec-=min*60;

    printf("%d:%d:%d\n",hours,min,sec);

    return 0;
}
