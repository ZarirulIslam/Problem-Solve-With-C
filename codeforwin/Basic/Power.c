#include<stdio.h>
#include<math.h>
int main()
{
    int base,exp,po;

    printf("Enter Base:");
    scanf("%d",&base);
    printf("Enter Exponent:");
    scanf("%d",&exp);

    po=pow(base,exp);

    printf("%d ^ %d = %d",base,exp,po);

    return 0;
}

