#include<stdio.h>
void main()
{
	int arr[6]={2,34,5,6,27,23};
	int num,flag=0;
	int i=0;
	printf("Enter an element\n");
	scanf("%d",&num);
	for(i=0;i<6;i++)
	{
		if(arr[i]==num)
		{
		flag=1;
		  break;
	}
	}
	if(flag==1)
	{
		printf("Enter element %d  is found at %d position",num,i+1);
	}
	else
	{
		printf("Entered element %d not found",num);
	}
}