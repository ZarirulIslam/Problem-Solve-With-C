#include<stdio.h>
int main()
{
    int a,b,pr,ls;

    printf("Input Cost Price:");
    scanf("%d",&a);

    printf("Input Selling Price:");
    scanf("%d",&b);

    if(b>a)
    {
        pr=b-a;
        printf("Profit: %d\n",pr);
    }
    else if(a>b)
    {
        ls=a-b;
        printf("Loss: %d\n",ls);
    }
    else
    {
        printf("wrong");
    }




    return 0;
}
