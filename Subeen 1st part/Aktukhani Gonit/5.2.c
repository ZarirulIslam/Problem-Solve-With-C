#include<stdio.h>
int main()
{
    double a1,a2,b1,b2,c,c1,c2,x,y;

    scanf("%lf",&a1);
    scanf("%lf",&a2);
    scanf("%lf",&b1);
    scanf("%lf",&b2);
    scanf("%lf",&c1);
    scanf("%lf",&c2);

    c = (a1*b2-a2*b1);

    if((int)c==0)
    {
        printf("Invalid");
    }
    else
    {
        x = (b2*c1-b1*c2)/c;
        y = (a1*c2-a2*c1)/c;
    }

    printf("X = %lf\n",x);
    printf("Y = %lf\n",y);

    return 0;
}
