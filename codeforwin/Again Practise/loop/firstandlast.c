#include<stdio.h>
int main()
{
    int n,j,first,last;

    scanf("%d",&n);

    j = n;

    last = n%10;

    for(;j>0;)
    {
        first = j%10;
        j = j/10;
    }

    printf("First: %d\n",first);
    printf("Last: %d\n",last);

    return 0;
}
