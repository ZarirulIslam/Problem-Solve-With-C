int main()
{
    int n,last,prod=1;

    scanf("%d",&n);


    for(;n>0;)
    {
        last = n%10;
        prod = prod*last;
        n = n/10;
    }

    printf("product = %d\n",prod);

    return 0;
}
