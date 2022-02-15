#include<stdio.h>
int main()
{
    int a,b,sum,sub,div,mul,mod;

    printf("Enter Two Number:");
    scanf("%d %d",&a,&b);

    sum=a+b;
    sub=a-b;
    div=a/b;
    mul=a*b;
    mod=a%b;

    printf("Sum=%d",sum);
    printf("\nSubtraction=%d",sub);
    printf("\nDivision=%d",div);
    printf("\nMultiplication=%d",mul);
    printf("\nModule=%d",mod);

    return 0;

}
