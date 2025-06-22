void main()
{
	int n;
	printf("enter range");
	scanf("%d",&n);
	    for (int i=1;i<=n;i++)
    {
        int temp=i;
        int sum=0;
    while(temp>0)
    {
        int rem=temp%10;  
        int factorial=1;
        for (int j=1;j<=rem;j++)
        {
            factorial=factorial*j;
        }
        sum=sum+factorial;
        temp=temp/10;  
    }
    if(sum==i)
    {
        printf(" %d Strong number\n",i);
    }
	}}
    
