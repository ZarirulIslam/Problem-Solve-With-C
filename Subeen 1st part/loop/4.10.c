#include<stdio.h>
int main()
{
    int n,i,j;

    for(n=1;n<=20;n++)
    {
        printf("%d Er Namta: \n",n);
        for(i=1;i<=10;i++)
        {
            printf("%d * %d = %d\n",i,n,i*n);
        }
    }

    return 0;
}
