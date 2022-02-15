#include<stdio.h>
int main()
{
    int m=0,n=5,i;

    for(i=1;i<=10;i=i+1)
    {
        m = m+n;
        //printf("%d + %d = %d\n",m,n,m);
        printf("%d * %d = %d\n",i,n,m);
    }

    return 0;
}
