#include<stdio.h>
int main()
{
    double amount;

    int amo,n100,n50,n20,n10,n5,n2,n1,n50p,n25p,n10p,n05p,n01p;

    n100=n50=n20=n10=n5=n2=n1=n50p=n25p=n10p=n05p=n01p=0;

    scanf("%lf",&amount);

    amo=amount*100;

       n100=amo/10000;
       amo=amo%10000;

       n50=amo/5000;
       amo=amo%5000;

       n20=amo/2000;
       amo=amo%2000;

       n10=amo/1000;
       amo=amo%1000;

       n5=amo/500;
       amo=amo%500;

       n2=amo/200;
       amo=amo%200;

       n1=amo/100;
       amo=amo%100;

       n50p=amo/50;
       amo=amo%50;

       n25p=amo/25;
       amo=amo%25;

       n10p=amo/10;
       amo=amo%10;

       n05p=amo/5;
       amo=amo%5;


    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",n100);
    printf("%d nota(s) de R$ 50.00\n",n50);
    printf("%d nota(s) de R$ 20.00\n",n20);
    printf("%d nota(s) de R$ 10.00\n",n10);
    printf("%d nota(s) de R$ 5.00\n",n5);
    printf("%d nota(s) de R$ 2.00\n",n2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",n1);
    printf("%d moeda(s) de R$ 0.50\n",n50p);
    printf("%d moeda(s) de R$ 0.25\n",n25p);
    printf("%d moeda(s) de R$ 0.10\n",n10p);
    printf("%d moeda(s) de R$ 0.05\n",n05p);
    printf("%d moeda(s) de R$ 0.01\n",amo);

return 0;

}
