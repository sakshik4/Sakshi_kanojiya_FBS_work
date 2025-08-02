void main()
{
	char str[50];
	printf("Enter string:");
	scanf("%s",str);
	
	int vowel=0, consonant=0, digit=0, symbol=0;
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || 
			str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
		{
			vowel++;
		}
		else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
		{
			consonant++;
		}
		else if(str[i]>='0' && str[i]<='9' )
		{
			digit++;
		}
		else 
		{
			symbol++;
		}
		i++;
	}
	printf("Count of vowel= %d\n",vowel);
	printf("Count of consonant= %d\n",consonant);
	printf("Count of digit= %d\n",digit);
	printf("Count of symbol= %d",symbol);
	
}