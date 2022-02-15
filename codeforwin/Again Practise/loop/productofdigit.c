#include<stdio.h>
int main()
{
    int n,j,first,last,prod=1;

    scanf("%d",&n);

    j = n;

    last = n%10;

    for(;j>0;)
    {
        first = j%10;
        j = j/10;
        prod = prod*first;
    }



    printf("First: %d\n",first);
    printf("Last: %d\n",last);
    printf("Product = %d\n",prod);

    return 0;
}
