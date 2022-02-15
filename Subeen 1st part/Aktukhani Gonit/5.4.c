#include<stdio.h>
int main()
{
    double total,monthly,loan,rate,years;

    scanf("%lf",&loan);
    scanf("%lf",&rate);
    scanf("%lf",&years);

    total = (loan+(loan*35*years)/100);
    monthly = total/(years*12);

    printf("Total = %lf\n",total);
    printf("Monthly = %lf\n",monthly);

    return 0;
}

