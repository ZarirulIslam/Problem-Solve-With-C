#include<stdio.h>
#include<math.h>
int main()
{
    int num,n,first,last,digit,swap,po;

    scanf("%d",&num);

    last = num%10;

    n = num;

    for(;n!=0;)
    {
        first = n%10;
        n = n/10;
    }
    digit = log10(num);
    po = round(pow(10,digit));

    swap = last;
    swap = swap * po;
    swap = swap + (num%(first*po));
    swap = swap - last;
    swap = swap + first;

    printf("The Last is %d\n",last);
    printf("The First is %d\n",first);
    printf("Before Swap : %d\n",num);
    printf("After Swapp: %d\n",swap);

    return 0;
}
