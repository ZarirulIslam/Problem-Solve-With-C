#include<stdio.h>
int main()
{
    int n,last,sum=0;

    scanf("%d",&n);


    for(;n>0;)
    {
        last = n%10;
        n = n/10;
        sum=(sum*10)+last;
    }

    printf("Reverse = %d\n",sum);

    return 0;
}
