#include<stdio.h>
int main()
{
    int n,i,count=0;

    scanf("%d",&n);

    for(i=2; i<n ; i++)
    {
        if(n%i==0)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    if(count == 0)
    {
        printf("%d is Prime",n);
    }
    else
    {
        printf("%d is not Prime",n);
    }
    return 0;
}
