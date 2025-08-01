void main()
{
	char str1[20];
	printf("Enter the string");
	scanf("%s",str1);
	char str2[20];
	printf("Enter the string");
	scanf("%s",str2);
	int compare=strncmp(str2,str1,1);
	str2[1]='\0';
	printf("\n compares str1 and str2 according to size %d\n",compare);
} 