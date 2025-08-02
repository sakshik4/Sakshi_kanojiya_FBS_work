void main()
{
	char str[20], rev[20];
	int i,flag=0,len;
	
	printf("Enter a string");
	gets(str);
	
	len=strlen(str);
//	printf("%d",len);

	for(int i=0; i<len; i++)
	{
		rev[i]=str[len-i-1];
	}
	rev[len]='\0';
	
	if(strcmp(str,rev)==0)
	{
		printf("Palidrome");
	}
	else 
	{
		printf("Not palindrome");
	}
}
	