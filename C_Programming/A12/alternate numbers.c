void main()
{
	int* arr=(int*)malloc(sizeof(int)*10);
	printf("enter the elements");
	storeanddisplay(arr,10);
	printf("\nalternate numbers in array ");
	alternatenumber(arr,10);
}
void storeanddisplay(int* arr,int size)
{
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\nelements in array:");
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
void alternatenumber(int* arr,int size)
{
	for(int i=0;i<size;i+=2)
	{
		printf("%d ",arr[i]);
	}
}