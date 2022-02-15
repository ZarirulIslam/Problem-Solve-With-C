#include<stdio.h>
int main()
{
    int n,last,first,j;

    scanf("%d",&n);

    first=n;

    last = n%10;

    while(first>0)
    {
        j=first%10;
        first=first/10;
    }

    printf("Last = %d\n",last);
    printf("First = %d\n",j);

    return 0;
}
/*#include<stdio.h>
int main()
{
    int n,last,first,j;

    scanf("%d",&n);

    first=n;

    last = n%10;

    while(first>=10)
    {
        first=first/10;
    }

    printf("Last = %d\n",last);
    printf("First = %d\n",first);

    return 0;
}*/
