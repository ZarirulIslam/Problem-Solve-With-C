#include<stdio.h>
int main()
{
    int n,row,col;

    scanf("%d",&n);

    for(row=n;row>=1;row--)
    {
        for(col=n;col>row;col--)
        {
            printf(" ");
        }
        for(col=1;col<=row;col++)
        {
            printf("%d",col);
        }
        for(col=row-1;col>=1;col--)
        {
            printf("%d",col);
        }
        printf("\n");
    }
}
