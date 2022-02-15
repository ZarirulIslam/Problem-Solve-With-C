#include<stdio.h>
int main()
{
    int factorial=1,n,i;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        factorial = factorial*i;
    }
    printf("The Factorial of %d is %d\n",n,factorial);
    return 0;
}
