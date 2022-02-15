#include<stdio.h>
int main()
{
    int n;
    n=20;

    if(n>0)
    {
        printf("The number is positive");
    }

    else if(n<0)
    {
        printf("The number is negative");
    }
    else if(n==0)
    {
        printf("The number is equal to zero");
    }
    else
    {
        printf("Error");
    }

    return 0;
}
