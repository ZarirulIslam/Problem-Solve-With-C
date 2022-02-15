#include<stdio.h>
int main()
{
    int n,last,j,first,sum;
    scanf("%d",&n);

    last = n%10;

    j = n;

    for(;j>0;)
    {
        first = j%10;
        j = j/10;
    }

    sum=last+first;

    printf("Last = %d\n",last);
    printf("First = %d\n",first);
    printf("Sum = %d\n",sum);

    return 0;
}
