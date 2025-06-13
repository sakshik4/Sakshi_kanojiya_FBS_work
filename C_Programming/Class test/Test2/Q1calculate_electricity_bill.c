void main()
{
	int units;
	int res=0;
	printf("Enter units");
	scanf("%d",&units);
	if(units>=1 && units<=50)
	{
	 res=units*30;
	 printf("per unit 30\n");
	}
	else if(units>=51 && units<=150)
	{
			 res=units*40;
			 printf("per unit 40\n");
	}
	else if(units>=151)
	{
			 res=units*50;
			 printf("per unit 50\n");
	}
	else
	{
		printf("Invalid units\n");
	}
	printf("Total amount of electricity bill on units are %d",res);
}
