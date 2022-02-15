#include<stdio.h>
int main()
{
    int n,last,sum=0;

    scanf("%d",&n);


    for(;n>0;)
    {
        last = n%10;
        sum = sum+last;
        n = n/10;
    }

    printf("Sum = %d",sum);

    return 0;
}
