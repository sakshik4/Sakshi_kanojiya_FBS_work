void storeanddisplay(int*,int);
int findmaxnumber(int*,int);
int findminnumber(int*,int);
void main()
{
	int* arr=(int*)malloc(sizeof(int)*10);
	printf("enter the elements in array");
	storeanddisplay(arr,10);
	int max=findmaxnumber(arr,10);
	printf("\nmaximun number in array is %d",max);
	int min=findminnumber(arr,10);
	printf("\nminimun number in array is %d",min);
}
void storeanddisplay(int* arr,int size)
{
	for(int i=0;i<size;i++)
	scanf("%d",&arr[i]);
	for(int i=0;i<10;i++)
	printf("%d ",arr[i]);
}
int findmaxnumber(int* arr,int size)
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
int findminnumber(int* arr,int size)
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