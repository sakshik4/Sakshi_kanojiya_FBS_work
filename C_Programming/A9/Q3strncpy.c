void main()
{
	char str1[20];
	printf("Enter the string");
	scanf("%s",str1);
	char str2[40];
	printf("Enter the string");
	scanf("%s",str2);
	int copy=strncpy(str2,str1,10);
	str2[10]='\0';
	printf("\n coped first 5 charaters in string %s",copy);
} 