#include<stdio.h>
int main()
{
    double r,sphere;

    scanf("%lf",&r);

    sphere=4.0/3*3.14159*r*r*r;

    printf("VOLUME = %.3lf",sphere);

    return 0;
}
