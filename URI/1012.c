#include<stdio.h>
int main()
{
    double A,B,C,tri,ci,tra,qua,rec;

    scanf("%lf %lf %lf",&A,&B,&C);

    tri=(A*C)/2;
    ci=(C*C)*3.14159;
    tra=((A+B)*C)/2;
    qua=B*B;
    rec=A*B;

    printf("TRIANGULO: %.3lf\n",tri);
    printf("CIRCULO: %.3lf\n",ci);
    printf("TRAPEZIO: %.3lf\n",tra);
    printf("QUADRADO: %.3lf\n",qua);
    printf("RETANGULO: %.3lf\n",rec);

    return 0;
}
