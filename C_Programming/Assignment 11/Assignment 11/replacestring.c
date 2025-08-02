void main()
{
	char str[100];
	printf("Enter a string:");
	scanf("%s",str);
	
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]=='R' || str[i]=='p')
		{
			str[i]='*';
		}
		i++;
	}
	printf("Modified string: %s",str);
}