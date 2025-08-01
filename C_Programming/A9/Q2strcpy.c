void main()
{
	char str1[20];
	printf("Enter the string");
	scanf("%s",str1);
	char str2[20];
	printf("Enter the string");
	scanf("%s",str2);
	int copy=strcpy(str2,str1);
	printf("\n %s ",copy);
} 