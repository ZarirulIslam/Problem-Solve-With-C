#include<stdio.h>
int main()
{
    int num,n,rem,pro=1;

    scanf("%d",&num);

    n = num;

    for(;n!=0;)
    {
        rem = n%10;
        pro=pro*rem;
        n = n/10;
    }

    printf("Product of digit = %d",pro);

    return 0;
}
