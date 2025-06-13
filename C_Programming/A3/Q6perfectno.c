void main()
{
    int n=28;
    int sum=0;
    int i =1;
    while(i<=n/2)
    {
        if(n%i== 0)
        {
            sum=sum+i;
        }
        i++;
    }
    if(sum==n)
    {
        printf("Perfect number");
    }
    else
    {
        printf("Not perfect number");
    }
}
