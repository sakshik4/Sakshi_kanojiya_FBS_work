int mystrlen(char*);
void main()
{
	char str[30]="sakshi";
	printf("%s",str);
	int length=mystrlen(str);
	printf("\nlength of string is %d",length);
}
int mystrlen(char*a)
{
	int i=0;
	while(a[i]!='\0')
	{
		i++;
	}
		return i;
}