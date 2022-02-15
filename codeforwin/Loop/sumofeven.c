#include<stdio.h>
int main()
{
    int i,n,sum=0,even;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            even = i;
            sum+=even;
        }
    }

    printf("%d\n",sum);

    return 0;
}
