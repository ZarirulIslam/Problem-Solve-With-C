#include<stdio.h>
#include<math.h>
int main()
{
    int n,j,last,first,digit,swap;

    scanf("%d",&n);

    last = n%10;
    digit=(int)log10(n);

    first = n;

    for(;first>0;)
    {
        j=first%10;
        first=first/10;
    }

    swap=last;
    swap= swap *(pow(10,digit));
    swap= swap + n%((int)pow(10,digit));
    swap=swap-last;
    swap=swap+j;

    printf("Last = %d\n",last);
    printf("First = %d\n",j);
    printf("Digit = %d\n",swap);

    return 0;
}
