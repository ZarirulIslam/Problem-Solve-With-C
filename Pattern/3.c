#include<stdio.h>
int main()
{
    int n,row,col;

    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            if(row==1 || row==n || col==n || col==1)
            {
                printf("1");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
