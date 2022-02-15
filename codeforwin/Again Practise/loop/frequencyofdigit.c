#include<stdio.h>
int main()
{
    int n,j,mod,zo=0,oe=1,to=2,te=3,fr=4,fe=5,sx=6,sn=7,et=8,nn=9;

    scanf("%d",&n);

    j = n;

    for(;n>0;)
    {
        mod = j%10;
        j = j/10;

        if(zo == mod)
        {
           printf("%d is palindrome\n",n);
        }
    }
}
