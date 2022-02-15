#include<stdio.h>
int main()
{
   double c,f;
   printf("Enter Farenheit:");
   scanf("%lf",&f);

   c=((f-32)*5/9);

   printf("Fareheit:%lf",c);

   return 0;

}
