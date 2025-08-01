void main()
{
	char str1[20];
	printf("Enter the string");
	scanf("%s",str1);
	char *ptr=strchr(str1,'h');
	printf("\n occerance of h at which option %d\n",*ptr);	
} 