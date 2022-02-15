#include<stdio.h>
int main()
{
    int num,n,rem,sum=0;

    scanf("%d",&num);

    n=num;

    for(;n!=0;)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }

    printf("%d\n",sum);

    return 0;
}
