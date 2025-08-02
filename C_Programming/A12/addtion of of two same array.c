void main()
{
	int* arr=(int*)malloc(sizeof(int)*5);
	int* brr=(int*)malloc(sizeof(int)*5);
	int* crr=(int*)malloc(sizeof(int)*5);
	printf("enter the element in arr");
	storeanddisplay(arr,5);
	printf("\nenter the element in brr");
	storeanddisplay(brr,5);
	additionodtwoarray(arr,brr,crr,5);
}
void storeanddisplay(int* arr,int size)
{
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
		
	printf("\nelements in array");
	printf("[");
	for(int i=0;i<size;i++)
		printf("%d, ",arr[i]);
	printf("\b\b]");
}
void additionodtwoarray(int* arr,int* brr,int* crr,int size)
{
	printf("\naddtion of two array:");
	printf("[");
	for(int i=0;i<size;i++)
	{
		crr[i]=arr[i]+brr[i];
		printf("%d, ",crr[i]);
	}
	printf("\b\b]");
}