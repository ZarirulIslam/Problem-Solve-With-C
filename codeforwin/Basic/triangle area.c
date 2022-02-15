#include<stdio.h>
int main()
{
    int b,h,a;

    printf("Enter Base:");
    scanf("%d",&b);
    printf("Enter Height:");
    scanf("%d",&h);

    a=(b*h)/2;

    printf("Triangle area:%d\n",a);

    return 0;
}
