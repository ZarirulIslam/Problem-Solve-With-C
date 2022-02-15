#include<stdio.h>
int main()
{
    char a;

    double result,c,d;

    scanf("%c",&a);
    scanf("%lf",&c);
    scanf("%lf",&d);

    switch(a)
    {
        case '+':
           {
               result = c+d;
               printf("%.2lf",result);
               break;
           }
        case '-':
           {
               result = c-d;
               printf("%.2lf",result);
               break;
           }
        case '/':
           {
               result = c/d;
               printf("%.2lf",result);
               break;
           }
        case '*':
           {
               result = c*d;
               printf("%.2lf",result);
               break;
           }
        default:
            {
                printf("Invalid");
            }
    }
    return 0;
}
