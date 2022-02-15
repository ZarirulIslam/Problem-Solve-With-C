/*#include<stdio.h>
int main()
{
    int i;

    for(i=1;i<=100;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }

    }

    return 0;
}*/
#include<stdio.h>
int main()
{
    int i=1,n;

    scanf("%d",&n);

    while(i<=n)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }

        i++;

    }

    return 0;
}
