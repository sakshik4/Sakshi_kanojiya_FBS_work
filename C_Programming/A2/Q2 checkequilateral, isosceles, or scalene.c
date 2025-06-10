void main()
{
	int a,b,c;
	printf("Enter 3 sides");
	scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c)
	printf("Equilateral triangle");
	else if(a==b||a==c||b==c)
	printf("isosceles triangle");
	else
	printf("scalene triangle");
}
	
