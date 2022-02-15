#include<stdio.h>
int main()
{
    char c;

    printf("Enter Character: ");
    scanf("%c",&c);

    if(c>='a' && c<='z')
    {
        printf("%c is lower case",c);
    }
    else if(c>='A' && c<='Z')
    {
        printf("%c is Upper case",c);
    }

    return 0;


}
