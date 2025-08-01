#include<stdio.h>
void main()
{
	int arr[6]={2,7,5,6,9,12};
	for(int i=0;i<6;i++)
	{
		if(arr[i]%2==0)
		{
		 printf("\nEven numbers %d ",arr[i]);
		}
		if(arr[i]%2!=0)
		{
		printf("\nodd number %d",arr[i]);
		}
	}
}