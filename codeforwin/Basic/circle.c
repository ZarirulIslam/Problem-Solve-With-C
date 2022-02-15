#include<stdio.h>
int main()
{
 double r,d,a,c;
 printf("Enter Radius:");
 scanf("%lf",&r);

 d=2*r;
 a=3.14*r;
 c=2*3.14*r*r;

 printf("Diameter=%.2lf\n",d);
 printf("Area=%.2lf\n",a);
 printf("Circumference=%.2lf\n",c);

 return 0;
}
