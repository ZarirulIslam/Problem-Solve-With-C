#include<stdio.h>
int main()
{
    int n,last,first,sum;

    scanf("%d",&n);

    first=n;

    last = n%10;

    while(first>=10)
    {
        first=first/10;
    }

    sum=last+first;

    printf("Sum = %d\n",sum);

    return 0;
}
