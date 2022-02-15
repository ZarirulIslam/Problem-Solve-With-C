/*#include<stdio.h>
int main()
{
    int n,count=0;

    scanf("%d",&n);

    for(;n>0;count++)
    {
        n=n/10;
    }

    printf("Digit = %d\n",count);

    return 0;
}*/

#include<stdio.h>
int main()
{
    int n,count=0;

    scanf("%d",&n);

    while(n>0)
    {
        n=n/10;
        count++;
    }

    printf("Digit = %d\n",count);

    return 0;
}
