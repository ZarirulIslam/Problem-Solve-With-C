#include<stdio.h>
int main()
{
    int num,div,mult,sub;

    printf("Enter Number:");
    scanf("%d",&num);

    div=num/2;
    mult=div *2;
    sub=num-mult;

    if(sub==0)
    {
        printf("this is even");
    }
    else
    {
        printf("this is odd");
    }

    return 0;
}
