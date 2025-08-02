void main()
{
	char str[100];
	printf("Ente a string:");
	scanf("%s",str);
	
	int count=0;
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
		{
			count++;
		}
		i++;
	}
	printf("Count of vowels: %d",count);
}