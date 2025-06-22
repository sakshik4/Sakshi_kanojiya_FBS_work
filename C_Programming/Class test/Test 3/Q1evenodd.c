#include<stdio.h>
void main()
{
	int start;
	int end;
	int number;
	printf("Enter the starting range");
	scanf("%d",&start);
	printf("Enter the ending range");
	scanf("%d",&end);
	printf("even number");
		for(int i=start;i<=end;i++)
		{
		if(i%2==0)
		{
			printf(" %d",i );
		}
	}
		printf("\nodd number");
		for(int i=start;i<=end;i++)
		{
		if(i%2!=0)
		{
			printf(" %d",i);
		}
}
}
	