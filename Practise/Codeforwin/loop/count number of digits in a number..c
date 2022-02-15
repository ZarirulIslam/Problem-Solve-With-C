#include<stdio.h>
int main()
{
    int num,i=0;

    scanf("%d",&num);

    for(;num!=0;)
    {
        num = num/10;
        i++;
    }
    printf("Total Digit is %d\n",i);

    return 0;
}
