void main()
{
	char str[10];
	printf("Enter string:");
	scanf("%s",str);
	int len=strlen(str);
	printf("%d",len);
	
	char newstr[10];
	
	newstr[0]=str[len-1];
	newstr[len-1]=str[0];
	
	for(int i=1; i<len-1; i++)
	{
		newstr[i]=str[i];
	}
	newstr[len]='\0';
	printf("New string:%s",newstr);

	
}