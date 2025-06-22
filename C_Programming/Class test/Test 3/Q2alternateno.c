#include<stdio.h>
void main()
{
	int start;
	int end;
	int sum=0;
	printf("Enter the starting number");
	scanf("%d",&start);
	printf("Enter the ending number");
	scanf("%d",&end);
	for(int i=start;i<=end;i++)
	{
		sum=sum+i;
		i++;
}
    printf("Sum of alternate number is %d",sum);
}