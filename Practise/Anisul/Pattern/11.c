#include<stdio.h>
int main()
{
    int n,row,col;

    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=n;col>row;col--)
        {
            printf("  ");
        }
        for(col=1;col<=row;col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
    return 0;
}
