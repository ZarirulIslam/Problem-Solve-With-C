#include<stdio.h>
int main()
{
    int n,row,col,iter;

    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        iter=row-1;
        for(col=row;col<row+n;col++)
        {
            if(col<=n)
            {
                printf("%d",col);
            }
            else
            {
                printf("%d",iter--);
            }
        }
        printf("\n");
    }
    return 0;
}
