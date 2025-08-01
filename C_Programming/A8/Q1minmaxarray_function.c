#include<stdio.h>
int findmin(int[],int);
int findmax(int[],int);
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
	int min=findmin(arr,5);
	int max=findmax(arr,5);
	printf("\nThe minimum from this array is %d",min);    
	printf("\nThe maximum from this array is %d",max);   
}
    int findmin(int arr[],int size)
    {
	int min=arr[0];
		for(int i=0;i<size;i++)
		{
	if(arr[i]<min)
        {
            min=arr[i];
        }
    }	
    return min;
}

    int findmax(int arr[],int size)
    {
	int max=arr[0];
	for(int i=0;i<size;i++)
	{
	if(arr[i]>max)
	{
		max=arr[i];
	}
}
   return max;
}