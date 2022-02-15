#include<stdio.h>
int main()
{
    int time,avg,total;
    double litres;

    scanf("%d",&time);
    scanf("%d",&avg);

    total=time*avg;
    litres=total/12.0;

    printf("%.3lf\n",litres);

    return 0;
}
