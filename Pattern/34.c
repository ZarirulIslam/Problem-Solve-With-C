#include<stdio.h>
int main()
{
    int n,row,col,iter=1;

    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            printf("    ");
        }
        for(col=1;col<row*2;col++)
        {
            printf("%3d ",iter*iter);
            iter++;
        }
        printf("\n");
    }
    return 0;
}
