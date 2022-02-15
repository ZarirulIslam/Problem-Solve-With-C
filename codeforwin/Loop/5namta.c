/*#include<stdio.h>
int main()
{
    int i,n;

    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }

    return 0;
}*/

#include<stdio.h>
int main()
{
    int i=1,n;

    scanf("%d",&n);

    while(i<=10)
    {
        printf("%d * %d = %d\n",n,i,n*i);
        i++;
    }

    return 0;
}
