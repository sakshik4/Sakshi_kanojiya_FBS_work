void main()
{
	char str[100];
	printf("Enter a string:");
	scanf("%s",str);
	char newstr[50];
	int n;
	printf("Enter the index to remove:");
	scanf("%d",&n);
	int j=0;
	int i=0;
	while(str[i]!='\0')
	{
		if(i != n)
		{
			newstr[j]=str[i];
			j++;
		}
		i++;
	}
	newstr[j]='\0';
	printf("Original string: %s",str);
	printf("\nAfter removing index %d: %s",n,newstr);
	
}