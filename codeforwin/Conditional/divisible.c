#include<stdio.h>
int main()
{
    int num;

    scanf("%d",&num);

    if(num%5==0 && num%11==0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
