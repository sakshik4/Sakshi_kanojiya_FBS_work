#include<stdio.h>
void main()
{
	int arr[6]={2,34,5,6,27,23};
	int sum=0;
	for(int i=0;i<6;i++)
	{
		sum=sum+arr[i];
	}
	printf("Sum of all array elements is %d",sum);
}