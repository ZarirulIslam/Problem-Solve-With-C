#include<stdio.h>
int main()
{
    int e,b,m,p,s,tot,avg;
    double per;

    printf("Enter Marks:");
    scanf("%d %d %d %d %d",&e,&b,&m,&s,&p);

    tot=e+b+m+s+p;
    avg=tot/5;
    per=(tot/500.0)*100;

    printf("Total: %d\n",tot);
    printf("Average: %d\n",avg);
    printf("Percentage: %.2lf",per);


    return 0;
}
