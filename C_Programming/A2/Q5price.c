void main()
{
	int price,totalprice,Discount;
	char isstudent,n,y;
	printf("Enter price");
	scanf("%d",&price);
	printf("Are you a student");
	scanf("%d",isstudent);
	if(isstudent==y|| isstudent==n)
	{
	 if(price>500)
	 Discount=price*0.20;
	 else
	 Discount=price*0.10;
	}
	else
	{
	 if(price>600)
	 Discount=price*0.15;
	 else
	 Discount=0;
	}
	totalprice=price-Discount;
	printf("Discount given on price is %d rupees on %d\n",Discount,price);
	printf("Total price=%d",totalprice);
}