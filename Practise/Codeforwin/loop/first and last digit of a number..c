#include<stdio.h>
int main()
{
    int num,n,first,last;

    scanf("%d",&num);

    last = num%10;

    n = num;

    for(;n!=0;)
    {
        first = n%10;
        n = n/10;
    }
    printf("The Last is %d\n",last);
    printf("The First is %d\n",first);

    return 0;
}
