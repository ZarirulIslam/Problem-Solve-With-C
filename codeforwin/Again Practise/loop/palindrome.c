#include<stdio.h>
int main()
{
    int n,j,first,sum=0;

    scanf("%d",&n);

    j = n;

    for(;j>0;)
    {
        first = j%10;
        j = j/10;
        sum = (sum*10)+first;
    }

    if(sum == n)
    {
        printf("%d is palindrome\n",n);
    }
    else
    {
        printf("%d is not a palindrome\n",n);
    }

    return 0;
}
