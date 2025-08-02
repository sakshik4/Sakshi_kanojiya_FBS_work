#include<stdio.h>
void main()
{
	char str[20];
	printf("Enter a string:");
	scanf("%s",str);
	
	char ch;
	printf("Enter character to search:");
	scanf(" %c",&ch);
	
	int count=0;
	
	printf("\nSearching '%c' in \"%s\"\n", ch, str);
	for(int i=0; str[i]!='\0'; i++)
	{
		if(str[i]==ch)
		{
			count++;
			printf("Found at Position %d ",i+1);
		}
	}
	 if (count == 0) 
	{
        printf("Character '%c' not found in the string.\n", ch);
    } 
	else 
	{
        printf("Character '%c' found %d times.\n", ch, count);
    }
}