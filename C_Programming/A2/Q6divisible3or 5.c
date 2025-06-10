void main()
{
	int no;
	printf("Enter number");
	scanf("%d",&no);
	if(no%3==0 && no%5==0)
	{
		printf("Divisible by both");
}
	    else if(no%3==0)
	    {
		printf("Divisible by 3 but not by 5");
	}
		else if(no%5==0){
		printf("Divisible by 5 but not by 3");
	}
	else{
		printf("Divisible by None");
	}
}