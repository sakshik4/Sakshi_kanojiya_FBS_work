void main()
{
	int* arr=(int*)malloc(sizeof(int)*5);
	int* brr=(int*)malloc(sizeof(int)*5);
	int* mergearr=(int*)malloc(sizeof(int)*10);
	printf("enter the element in arr");
	storeanddisplay(arr,5);
	printf("\nenter the element in brr");
	storeanddisplay(brr,5);
	mergearray(arr,brr,mergearr,5,5,10);
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
void mergearray(int* arr,int* brr,int* mergearr,int sizea,int sizeb,int sizem)
{
	int i,j;
    for(i=0;i<sizea;i++) {
        mergearr[i]=arr[i];
    }
    for(j=0;j<sizeb;j++) {
        mergearr[i+j]=brr[j];
    }

    printf("\nMerged array:\n");
    for(i=0;i<sizea+sizeb;i++) {
        printf("%d ",mergearr[i]);
    }	
	
}