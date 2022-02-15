#include<stdio.h>
int main()
{
    double num1,num2,sum,sub,mul,div;

    char sign;

    printf("Enter Number1:");
    scanf("%lf",&num1);
    printf("Enter Number2:");
    scanf("%lf",&num2);

    sum=num1+num2;
    sign='+';
    printf("%lf %c %lf = %.3lf\n",num1,sign,num2,sum);

    sub=num1-num2;
    sign='-';
    printf("%lf %c %lf = %.3lf\n",num1,sign,num2,sub);

    mul=num1*num2;
    sign='*';
    printf("%lf %c %lf = %.3lf\n",num1,sign,num2,mul);

    div=num1/num2;
    sign='/';
    printf("%lf %c %lf = %.3lf\n",num1,sign,num2,div);

    return 0;

}
