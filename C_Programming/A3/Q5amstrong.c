void main()
{
	int no=153;
	int rem,res=0;
	int temp=no;
	while(no!=0)
	{
		rem=no%10;
		res=res+(rem*rem*rem);
		no=no/10;
	}
	if(res==temp)
	{
		printf("Amstrong number");
	}
	else
	{
		printf("not amstrong");
	}
	}