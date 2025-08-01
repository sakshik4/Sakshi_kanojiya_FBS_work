void main()
{
	char str1[20];
	printf("Enter the string");
	scanf("%s",str1);
	char str2[20];
	printf("Enter the string");
	scanf("%s",str2);
	int concatenate=strcat(str2,str1);
	printf("\n concatenate str1 and str2 %s",concatenate);
} 