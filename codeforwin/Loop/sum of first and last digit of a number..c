#include<stdio.h>
int main()
{
    int num,n,first,last,sum;

    scanf("%d",&num);

    n = num;

    last = num%10;

    for(;n>0;)
    {
        first = n%10;
        n = n/10;
    }

    sum = first +last;

    printf("The Sum of %d + %d = %d\n",first,last,sum);

    return 0;
}
