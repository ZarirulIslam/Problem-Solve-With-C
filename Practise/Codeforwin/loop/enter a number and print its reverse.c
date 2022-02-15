#include<stdio.h>
int main()
{
    int num,n,rem,rev=0;

    scanf("%d",&num);

    n = num;

    for(;n!=0;)
    {
        rem = n%10;
        rev=rev*10+rem;
        n = n/10;
    }

    printf("Before Reverse = %d\n",num);
    printf("After Reverse = %d\n",rev);

    return 0;
}
