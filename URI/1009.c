#include <stdio.h>

int main()
{
    char name;

    double salary,sales,percent,total;

    scanf("%s",&name);
    scanf("%lf",&salary);
    scanf("%lf",&sales);

    percent=(sales/100)*15;
    total=salary+percent;

    printf("TOTAL = R$ %.2lf\n",total);

    return 0;
}
