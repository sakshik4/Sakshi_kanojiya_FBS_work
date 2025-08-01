#include<stdio.h>
int sum(int arr[],int size);
void main()
{
	int arr[50];
	int size;
	int result;
	printf("Enter the number of elements: ");
    scanf("%d", &size);
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nElements in array are:\n");
	for(int i=0;i<size;i++)
	{
		printf("%d",arr[i]);
	}
	int sum(arr,size);
	printf("\nsum of array is %d",sum);
}                              
	
	int sum(int arr[],int size)
	{
	int sum=0;
	for(int i=0;i<6;i++)
	{
		sum=sum+arr[i];
	}
	return sum;

}
