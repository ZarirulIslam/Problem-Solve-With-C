#include<stdio.h>
int main()
{
    int temp;

    double t,cel,far;

    printf("------------------Temparature Convertion Menu------------------");
    printf("\n");
    printf("1. Farenheit to Celcius\n");
    printf("2. Celcius to Farenheit\n");
    printf("Enter Your Choise: ");
    scanf("%d",&temp);

    switch(temp)
    {
        case 1:
            {
                printf("\nEnter Farenheit: ");
                scanf("%lf",&t);
                cel = ((t-32)/9)*5;
                printf("Temparature in Celcius: %.2lf\n",cel);
                break;
            }
        case 2:
            {
                printf("\nEnter Celcius: ");
                scanf("%lf",&t);
                far = ((t*9)/5)+32;
                printf("Temparature in Farenheit: %.2lf\n",far);
                break;
            }
        default:
            {
                printf("Invalid");
            }
    }
    return 0;
}
