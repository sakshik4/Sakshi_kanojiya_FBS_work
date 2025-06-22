void main()
{
	int n;
	printf("enter the range");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
        int sum=0;
		for(int j=1;j<=i/2;j++)
		{
		if(i%j==0)
		{
			sum=sum+j;
		}
	}
	if(sum==i)
	{
	printf("perfect number %d\n",i);
}
}
}