#include <stdio.h>
void storeanddisplay(int* arr, int size);
void sortarray(int* arr, int size);
void  main() {
    int* arr=(int*)malloc(sizeof(int)*10);
    printf("Enter the elements: ");
    storeanddisplay(arr,10);
    sortarray(arr,10);
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
void sortarray(int* arr,int size)
{
	int i,j,temp;
    for(i=0;i<size-1;i++) {
        for(j=0;j<size-i-1;j++) {
            if(arr[j]>arr[j+1]) {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }            
        }
    }

    printf("\nSorted array in ascending order:\n");
    for(i=0;i<size;i++) {
        printf("%d ",arr[i]);
    }                
}
