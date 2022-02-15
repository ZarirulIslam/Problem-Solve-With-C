#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    double sq,r1,r2;

    printf("Input a: ");
    scanf("%d",&a);
    printf("Input b: ");
    scanf("%d",&b);
    printf("Input c: ");
    scanf("%d",&c);

    sq=sqrt((b*b)-(4*a*c));

    if(sq>0 && a!=0)
    {
        r1=-(b+sq)/(2*a);
        r2=-(b-sq)/(2*a);
    }

    printf("Root1: %.3lf\n",r1);
    printf("Root2: %.3lf\n",r2);

    return 0;
}
