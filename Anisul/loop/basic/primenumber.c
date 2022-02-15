#include<stdio.h>
int main()
{
    int i,n,count=0;

    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count == 0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}














/*#include<stdio.h>
int main()
{
    int i,n,j,count=0;

    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        for(j=2;j<i;j++)
        {
          if(i%j==0)
            {
              count++;
              break;
            }
        }
        if(count==0)
        {
           printf("%d is Prime Number\n",i);
        }
        else
        {
           printf("%d is not a prime number\n",i);
        }
    }
}*/
