void main()
{
	int* arr=(int*)malloc(sizeof(int)*10);
	storeanddisplay(arr,10);
	evenodd(arr,10);
}
void storeanddisplay(int* arr,int size)
{
	printf("enter the elements");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("elements in array:");
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
void evenodd(int* arr,int size)
{

	printf("\neven numbesr in array: ");
	for(int i=0;i<size;i++)
	{
		if(arr[i]%2==0)
			printf("%d ",arr[i]);
		
	}
	
	printf("\nodd numbers in array: ");
	for(int i=0;i<size;i++)
	{
		if(arr[i]%2!=0)
			printf("%d ",arr[i]);
	}
}