#include<stdio.h>
#include<math.h>
int main()
{
    double A,B,C,R1,R2,sq;

    scanf("%lf %lf %lf",&A,&B,&C);

    sq = sqrt((B*B)-(4*A*C));

    if(sq>0 && A!=0)
    {
        R1 = ((-B+sq)/(2*A));
        R2 = ((-B-sq)/(2*A));

        printf("R1 = %.5lf\n",R1);
        printf("R2 = %.5lf\n",R2);

    }
    else
    {
        printf("Impossivel calcular\n");
    }

    return 0;
}
