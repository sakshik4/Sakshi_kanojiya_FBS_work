void main()
{
    int no=145;
    int temp=no;
    int sum=0;
    while (no!=0)
    {
        int rem=no%10;  
        int factorial=1;
        for (int i=1;i<=rem;i++)
        {
            factorial=factorial*i;
        }
        sum=sum+factorial;
        no=no/10;  
    }
    if(sum==temp)
    {
        printf("Strong number\n");
    }
    else
    {
        printf("Not strong\n");
    }
}
