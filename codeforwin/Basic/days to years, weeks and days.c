/*Myself*/
/*#include<stdio.h>
int main()
{
    int day,years,week,days,mod,mod1;

    printf("Enter Days:");
    scanf("%d",&day);

    years=day/365;
    mod=day%365;
    week=mod/7;
    mod1=mod%7;
    days=mod1/1;


    printf("%d years %d weeks %d days",years,week,days);

    return 0;

}*/

#include<stdio.h>
int main()
{
    int days,years,weeks;

    printf("Enter Days:");
    scanf("%d",&days);

    years=days/365;
    weeks=(days%365)/7;
    days=days-((years*365)+(weeks*7));

    printf("%d years %d weeks %d days\n",years,weeks,days);

    return 0;
}

