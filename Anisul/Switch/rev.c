#include<stdio.h>
int main()
{
    int num,n,rem=0,last;

    scanf("%d",&num);

    n=num;

    for(;n!=0;)
    {
        last = n%10;
        rem=(rem*10)+last;
        n=n/10;
    }
    printf("%d\n",rem);

    return 0;
}
