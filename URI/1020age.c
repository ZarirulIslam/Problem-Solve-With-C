#include<stdio.h>
int main()
{
    int year,day,month;

    scanf("%d",&day);

    year=day/365;
    day-=year*365;

    month=day/30;
    day-=month*30;

    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",month);
    printf("%d dia(s)\n",day);

    return 0;
}
