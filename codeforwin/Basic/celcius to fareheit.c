#include<stdio.h>
int main()
{
    double c,f;
    printf("Enter Celcius:");
    scanf("%lf",&c);

    f=((c*9/5)+32);

    printf("Farenheit:%.2lf",f);

    return 0;

}
