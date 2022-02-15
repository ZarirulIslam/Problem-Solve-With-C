#include<stdio.h>
int main()
{
    double N1,N2,N3,N4,N5,avg1,avg2;

    scanf("%lf %lf %lf %lf",&N1,&N2,&N3,&N4);

    avg1=((N1*2)+(N2*3)+(N3*4)+(N4*1))/10.0;

    if(avg1>=7.0)
    {
        printf("Media: %.1lf\n",avg1);
        printf("Aluno aprovado.\n");
    }
    else if(avg1<5.0)
    {
        printf("Media: %.1lf\n",avg1);
        printf("Aluno reprovado.\n");
    }
    else if(avg1>=5.0 && avg1<=6.9)
    {
        printf("Media: %.1lf\n",avg1);
        printf("Aluno em exame.\n");
        scanf("%lf",&N5);
        printf("Nota do exame: %.1lf\n",N5);
        avg2=(avg1+N5)/2;
        if(avg2>=5.0)
        {
        printf("Aluno aprovado.\n");
        }
        else if(avg1<4.9)
        {
        printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",avg2);
    }
    else
    {
        printf("Wrong\n");
    }

    return 0;

}
