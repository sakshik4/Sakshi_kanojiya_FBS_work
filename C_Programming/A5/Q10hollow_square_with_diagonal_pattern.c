void main()
{
	int row=5;
	int col=5;
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=col;j++)
	{
		if(i==1||i==5||j==1||j==5||i==j)
		printf("*");
		else
			printf(" ");
	}
	
		printf("\n");
	}
}