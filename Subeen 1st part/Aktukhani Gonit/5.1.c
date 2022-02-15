#include<stdio.h>
int main()
{
    double xplusy,xminusy,x,y;

    scanf("%lf",&xplusy);
    scanf("%lf",&xminusy);

    x = (xplusy+xminusy)/2;
    y = (xplusy-xminusy)/2;

    printf("X = %lf\n",x);
    printf("Y = %lf\n",y);

    return 0;
}
