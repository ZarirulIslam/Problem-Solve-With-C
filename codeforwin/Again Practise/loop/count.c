#include<stdio.h>
int main()
{
    int n,count=0;

    scanf("%d",&n);

    for(;n>0;count++)
    {
        n=n/10;
    }

    printf("Total Digit: %d\n",count);

    return 0;
}

