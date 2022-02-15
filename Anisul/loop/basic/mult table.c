#include<stdio.h>
int main()
{
    int i,j,n;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("---------------------------------------------------\n");
        printf("------------------%d er Namta: --------------------\n",i);
        printf("\n");
        for(j=1;j<=10;j++)
        {
            printf("%d * %d = %d\n",i,j,i*j);
        }
        printf("\n");
    }
    printf("------------End Of Multiplication Table------------\n");
    printf("---------------------------------------------------\n");
    return 0;
}
