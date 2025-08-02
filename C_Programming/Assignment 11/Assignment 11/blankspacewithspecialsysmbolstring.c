void main()
{
	char str[100]={'R',' ','u',' ','p',' ','e',' ','e',' ','s'};
	printf("Enter string: %s",str);
//	scanf("%s",str);

	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
			str[i]='?';
		}
		i++;
	}
	printf("\nBlank space replace with special sysmbol: %s",str);
}