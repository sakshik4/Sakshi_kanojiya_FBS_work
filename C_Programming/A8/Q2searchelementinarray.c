#include<stdio.h>
int search(int arr[],int size,int num);
void main()
{
    int arr[6];
    int num,size=6;

    printf("Enter 6 elements:\n");
    for(int i=0;i<size;i++) 
	{
        scanf("%d",&arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d",&num);

    int pos=search(arr,size,num);

    if(pos!=-1) 
	{
        printf("Entered element %d is found at position %d\n",num,pos + 1);  
    } else {
        printf("Entered element %d not found\n",num);
    }
}

int search(int arr[],int size,int num)
 {
    for(int i=0;i<size;i++) {
        if(arr[i]==num)
		 {
            return i;
        }
    }
    return -1;  
}
