#include<stdio.h>
void main()
{
	int arr[5];
	printf("enter Element");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nElements in array are:\n");
	for(int i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
	int max=arr[0];
	int min=arr[0];
	for(int i=0;i<5;i++)
	{
	if(arr[i]>max)
	{
		max=arr[i];
	}
	if(arr[i]<min)
        {
            min=arr[i];
        }
    }	
	printf("\nThe maximum from this array is %d",max);    
	printf("\nThe maximum from this array is %d",min);      
}