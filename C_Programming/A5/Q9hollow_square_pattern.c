void main()
{
	int row=4;
	int col=4;
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=col;j++)
	{
		if(i==1||i==4||j==1||j==4)
		printf("*");
		else
			printf(" ");
	}
	
		printf("\n");
	}
}