#include<stdio.h>
int main()
{
    int i,n,sum;

    scanf("%d",&n);

    for(i=1,sum=0;i<=n;i=i+2)
    {
        sum=sum+i;
    }
    printf("Sum = %d\n",sum);

    return 0;
}
