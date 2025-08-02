void storeanddisplayarray(int* ,int );
int sumofarray(int* ,int );
void main()
{
	int* arr=(int*)malloc(sizeof(int)*5);
	printf("enter the elements in array");
	storeanddisplayarray(arr,5);
    int sum=sumofarray(arr,5);
	printf("\nsum of all elements in array is %d",sum);
}
void storeanddisplayarray(int* arr,int size)
{
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
}
int sumofarray(int* arr,int size)
{	
    int sum=0;
	for(int i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}