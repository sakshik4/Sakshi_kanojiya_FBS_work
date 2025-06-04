void main()
{
	int a=121;
	int r1,r2,r3,q1,reverse;
	r1=a%10;
	q1=a/10;
	r2=q1%10;
	r3=q1/10;
	reverse=r1*100+r2*10+r3;
	printf("reverse of a is %d",reverse);
	if(a==reverse)
	{
		printf("\nPallindrome number");
	}
	else
	{
	printf("\nNot pallindrome number");	
	}
}