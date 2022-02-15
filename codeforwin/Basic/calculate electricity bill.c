#include<stdio.h>
int main()
{
    double unit,total1,total2,sur;

    printf("Enter Unit:");
    scanf("%lf",&unit);

    if(unit<=50)
    {
        total1=unit*0.50;
    }
    else if(unit<=150)
    {
        total1=25+(unit-50)*0.75;
    }
    else if(unit<=250)
    {
        total1=100+(unit-150)*1.20;
    }
    else if(unit>250)
    {
        total1=220+(unit-150)*1.50;
    }
    else
    {
        printf("wrong input\n");
    }

    sur=total1*0.2;
    total2=total1+sur;

    printf("Bill = %.3lf\n",total2);

    return 0;
}
