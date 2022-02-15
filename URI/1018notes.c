#include<stdio.h>
int main()
{
    int amount;

    int n100,n50,n20,n10,n5,n2,n1;

    n100=n50=n20=n10=n5=n2=n1=0;

    scanf("%d",&amount);
    printf("%d\n",amount);

    if(amount>=100)
    {
       n100=amount/100;
       amount-=n100*100;
    }
    if(amount>=50)
    {
       n50=amount/50;
       amount-=n50*50;
    }
    if(amount>=20)
    {
       n20=amount/20;
       amount-=n20*20;
    }
    if(amount>=10)
    {
       n10=amount/10;
       amount-=n10*10;
    }
    if(amount>=5)
    {
       n5=amount/5;
       amount-=n5*5;
    }
    if(amount>=2)
    {
       n2=amount/2;
       amount-=n2*2;
    }
    if(amount>=1)
    {
       n1=amount/1;
       amount-=n1*1;
    }

    printf("%d nota(s) de R$ 100,00\n",n100);
    printf("%d nota(s) de R$ 50,00\n",n50);
    printf("%d nota(s) de R$ 20,00\n",n20);
    printf("%d nota(s) de R$ 10,00\n",n10);
    printf("%d nota(s) de R$ 5,00\n",n5);
    printf("%d nota(s) de R$ 2,00\n",n2);
    printf("%d nota(s) de R$ 1,00\n",n1);

return 0;
}
