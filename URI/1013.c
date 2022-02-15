#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,ab,large;

    scanf("%d %d %d",&a,&b,&c);

    ab=(((a+b)+abs(a-b))/2);
    large=(((ab+c)+abs(ab-c))/2);

    printf("%d eh o maior\n",large);

    return 0;
}
