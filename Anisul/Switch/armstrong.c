#include<stdio.h>
int main()
{
    int num,n,rem=0,last;

    scanf("%d",&num);

    n=num;

    for(;n!=0;)
    {
        last = n%10;
        rem=rem+(last*last*last);
        n=n/10;
    }
    if(rem==num)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }


    return 0;
}
