#include<stdio.h>
int main()
{
    int A,B,C,D,sumab,sumcd;

    scanf("%d %d %d %d",&A,&B,&C,&D);

    sumab=A+B;

    sumcd=C+D;

    if(B>C && D>A && sumcd>sumab && C>=0 && D>=0 && A%2==0)
    {
        printf("Valores aceitos\n");
    }
    else
    {
        printf("Valores nao aceitos\n");
    }

    return 0;
}
