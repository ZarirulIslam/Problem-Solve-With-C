#include<stdio.h>
int main()
{
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    if(b>a>c)
    {
        printf("%d\n",c);
        printf("%d\n",a);
        printf("%d\n",b);
    }
    else if(a>b>c)
    {
        printf("%d\n",c);
        printf("%d\n",b);
        printf("%d\n",a);
    }
    else if(a>c>b)
    {
        printf("%d\n",b);
        printf("%d\n",c);
        printf("%d\n",a);
    }
    else if(b>c>a)
    {
        printf("%d\n",a);
        printf("%d\n",c);
        printf("%d\n",b);
    }
    else if(c>a>b)
    {
        printf("%d\n",b);
        printf("%d\n",a);
        printf("%d\n",c);
    }
    else if(c>b>a)
    {
        printf("%d\n",a);
        printf("%d\n",b);
        printf("%d\n",c);
    }
    else
    {
        printf("Wrong\n");
    }

    printf("\n");
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);

    return 0;
}
