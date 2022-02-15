#include<stdio.h>
int main()
{
    int n,num,last,sum=0;

    scanf("%d",&num);

    n=num;

    for(;n>0;)
    {
        last = n%10;
        n = n/10;
        sum=(sum*10)+last;
    }

    if(sum == num)
    {
        printf("%d is palindrome\n",num);
    }
    else
    {
        printf("%d is not Palindrome\n",num);
    }


    return 0;
}
