#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter First Angles:");
    scanf("%d",&a);
    printf("Enter Second Angles:");
    scanf("%d",&b);

    c=180-(a+b);

    printf("Third Angles: %d\n",c);

    return 0;
}
