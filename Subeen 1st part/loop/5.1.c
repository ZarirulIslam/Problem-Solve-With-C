#include<stdio.h>
int main()
{
    double x,y,xplusy,xminusy;

    printf("Enter x+y :");
    scanf("%lf",&xplusy);

    printf("Enter x-y :");
    scanf("%lf",&xminusy);

    x=(xplusy+xminusy)/2;
    y=(xplusy-xminusy)/2;

    printf("X = %.3lf\n",x);
    printf("Y = %.3lf\n",y);

    return 0;
}
