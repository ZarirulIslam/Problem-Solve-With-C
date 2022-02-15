#include<stdio.h>
#include<math.h>
int main()
{
    int n,j,last,first,power,swap,add;

    scanf("%d",&n);

    last = n%10;

    j=n;

    for(;j>0;)
    {
        first=j%10;
        j=j/10;
    }

    power = log10(n);

    swap = power;
    swap = last * pow(10,swap);
    add  = n%(int)pow(10,power);
    swap = swap + add;
    swap = swap - last;
    swap = swap + first;

    printf("First: %d\n",first);
    printf("Last: %d\n",last);
    printf("Original: %d\n",n);
    printf("After Swapping: %d\n",swap);

    return 0;
}
