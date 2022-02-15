#include<stdio.h>
int main()
{
    double cm,m,km;
    printf("Enter Centimeter:");
    scanf("%lf",&cm);

    m=cm/100;
    km=cm/100000;

    printf("Meter:%lf\n",m);
    printf("Kilometer:%lf\n",km);

    return 0;
}
