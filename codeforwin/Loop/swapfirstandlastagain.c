#include<stdio.h>
#include<math.h>
int main()
{
    int n,last,j,first,digit,swap,po;

    scanf("%d",&n);

    last = n%10;

    digit = (int)log10(n);

    j = n;

    for(;j>0;)
    {
        first = j%10;
        j = j/10;
    }

    po =(int) round(pow(10,digit));

    swap = last;
    swap = swap * po;
    swap = swap + (n%po);
    swap = swap - last;
    swap = swap + first;

    printf("Last = %d\n",last);
    printf("First = %d\n",first);
    printf("First = %d\n",swap);

    return 0;
}
