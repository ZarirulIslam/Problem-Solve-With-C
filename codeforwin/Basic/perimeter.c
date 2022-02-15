#include<stdio.h>
int main()
{
    int l,w,pe;
    printf("Enter Length:");
    scanf("%d",&l);
    printf("Enter Width:");
    scanf("%d",&w);

    pe=2*(l+w);

    printf("Rectangle Perimeter:%d",pe);

    return 0;
}
