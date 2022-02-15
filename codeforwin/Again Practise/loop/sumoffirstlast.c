#include<stdio.h>
int main()
{
    int n,j,first,last,sum;

    scanf("%d",&n);

    j = n;

    last = n%10;

    for(;j>0;)
    {
        first = j%10;
        j = j/10;
    }

    sum = first+last;


    printf("First: %d\n",first);
    printf("Last: %d\n",last);
    printf("Sum = %d + %d = %d\n",first,last,sum);

    return 0;
}
