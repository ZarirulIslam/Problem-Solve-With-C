#include<stdio.h>
int main()
{
    int cp1,cp2,up1,up2;
    double p1,p2,total;

    scanf("%d %d %lf",&cp1,&up1,&p1);
    scanf("%d %d %lf",&cp2,&up2,&p2);

    p1=up1*p1;
    p2=up2*p2;

    total=p1+p2;

    printf("VALOR A PAGAR: R$ %.2lf\n",total);

    return 0;
}

