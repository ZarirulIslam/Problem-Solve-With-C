/*#include<stdio.h>
int main()
{
    double amount;

    int amo,n100,n50,n20,n10,n5,n2,n1,n50p,n25p,n10p,n05p,n01p;

    n100=n50=n20=n10=n5=n2=n1=n50p=n25p=n10p=n05p=n01p=0;

    scanf("%lf",&amount);

    amo=amount*100;

    if(amo>=10000)
    {
       n100=amo/10000;
       amo=amo%10000;
    }
    if(amo>=5000)
    {
       n50=amo/5000;
       amo=amo%5000;
    }
    if(amo>=2000)
    {
       n20=amo/2000;
       amo=amo%2000;
    }
    if(amo>=1000)
    {
       n10=amo/1000;
       amo=amo%1000;
    }
    if(amo>=500)
    {
       n5=amo/500;
       amo=amo%500;
    }
    if(amo>=200)
    {
       n2=amo/200;
       amo=amo%200;
    }
    if(amo>=100)
    {
       n1=amo/100;
       amo=amo%100;
    }
    if(amo>=50)
    {
       n50p=amo/50;
       amo=amo%50;
    }
    if(amo>=25)
    {
       n25p=amo/25;
       amo=amo%25;
    }
    if(amo>=10)
    {
       n10p=amo/10;
       amo=amo%10;
    }
    if(amo>=5)
    {
       n05p=amo/5;
       amo=amo%5;
    }

    if(amo>=1)
    {
       n01p=amo/1;
    }

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
    printf("%d moeda(s) de R$ 0.01\n",n01p);

return 0;

}*/
#include<stdio.h>
int main()
{
    double amount;

    int number,n100,n50,n20,n10,n5,n2,n1,n50p,n25p,n10p,n5p,n1p;

    n100=n50=n20=n10=n5=n2=n1=n50p=n25p=n10p=n5p=n1p=0;

    scanf("%lf",&amount);

    number=amount*100;

    if(number>=10000)
    {
        n100=number/10000;
        number=number%10000;
    }
    if(number>=5000)
    {
        n50=number/5000;
        number=number%5000;
    }
    if(number>=2000)
    {
        n20=number/2000;
        number=number%2000;
    }
    if(number>=1000)
    {
        n10=number/1000;
        number=number%1000;
    }
    if(number>=500)
    {
        n5=number/500;
        number=number%500;
    }
    if(number>=200)
    {
        n2=number/200;
        number=number%200;
    }
    if(number>=100)
    {
        n1=number/100;
        number=number%100;
    }
    if(number>=50)
    {
        n50p=number/50;
        number=number%50;
    }
    if(number>=25)
    {
        n25p=number/25;
        number=number%25;
    }
    if(number>=10)
    {
        n10p=number/10;
        number=number%10;
    }
    if(number>=5)
    {
        n5p=number/5;
        number=number%5;
    }
    if(number>=1)
    {
        n1p=number/1;
    }

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
    printf("%d moeda(s) de R$ 0.05\n",n5p);
    printf("%d moeda(s) de R$ 0.01\n",n1p);

    return 0;
}
