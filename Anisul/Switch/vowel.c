#include<stdio.h>
int main()
{
    char v;

    scanf("%c",&v);

    switch(v)
    {
       case 'a':
       case 'e':
       case 'i':
       case 'o':
       case 'u':
       case 'A':
       case 'E':
       case 'I':
       case 'O':
       case 'U':
        {
            printf("Vowel");
            break;
        }
       default:
        {
            printf("Consonant");
        }

    }
}
