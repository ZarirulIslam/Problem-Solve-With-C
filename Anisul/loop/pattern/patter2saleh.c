#include<stdio.h>
int  main()
{
    int n,row,col;

    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            printf("%d%d ",row,col);
        }
        printf("\n");
    }
}
