#include<stdio.h>
int main()
{
    double basic,hra,da,total;

    printf("Enter Basic Salary:");
    scanf("%lf",&basic);

    if(basic<=10000)
    {
        hra=basic*0.2;
        da=basic*0.8;
    }
    else if(basic>10000 && basic<=20000)
    {
        hra=basic*0.25;
        da=basic*0.90;
    }
    else if(basic>=20001)
    {
        hra=basic*0.3;
        da=basic*0.95;
    }
    else
    {
        printf("wrong input");
    }

    total=basic+hra+da;

    printf("Gross salary = %.3lf\n",total);

   return 0;

}
