#include<stdio.h>
int main()
{
    int num1,num2,rem,n1,n2,lcm;

    scanf("%d",&num1);
    scanf("%d",&num2);

    n1 = num1;
    n2 = num2;

    for(;n2!=0;)
    {
        rem = n1%n2;
        n1 = n2;
        n2 = rem;
    }

    lcm = (num1*num2)/n1;

    printf("\n");
    printf("GCD is %d\n",n1);
    printf("LCM is %d\n",lcm);

    return 0;
}
