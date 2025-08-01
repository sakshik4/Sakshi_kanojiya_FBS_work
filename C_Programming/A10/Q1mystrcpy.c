char* mystrcpy(char*,char*);
void main()
{
	char str1[50]="sakshi";
	printf("%s",str1);
	char str2[50];
	mystrcpy(str2,str1);
	printf("\nstr1 coped in str2 %s",str2);
}
	char* mystrcpy(char*a,char*b){
	int i=0;
	while(b[i]!='\0')
	{ 
		a[i]=b[i];
		i++;
	}
	a[i] ='\0';
	return a;
}
