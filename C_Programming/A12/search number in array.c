void storeanddisplay(int* arr,int size);
int searcharrayelement(int* arr,int ci,int ele);
void main()
{
    int* arr=(int*)malloc(sizeof(int)*5);
	printf("enter the elements");
	storeanddisplay(arr,5);
	printf("\nssenter the element you want to search");
		int ele;
		scanf("%d",&ele);
		int index=searcharrayelement(arr,5,ele);
		if(index==-1)
			printf("element not found");
		else
			printf("\n%d number found at %d index",ele,index);
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
int searcharrayelement(int* arr,int size,int ele)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==ele)
			return i;
		
	}
	return -1;	
}