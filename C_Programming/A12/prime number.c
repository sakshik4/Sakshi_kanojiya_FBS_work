void main() 
{
	int* arr=(int*)malloc(sizeof(int)*10);
	printf("enter the element in arr");
	storeanddisplay(arr,10);
	printf("\nPrime numbers in array: ");
	primenumber(arr,10);
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

void primenumber(int* arr,int size)
{
    for(int i=0;i<10;i++) 
	{
        int num=arr[i];
        int isPrime=1;
        if(num<2)
            isPrime=0;
        else {
            for(int j=2;j<=num/2;j++)
			{
                if(num%j==0)
				{
                    isPrime=0;
                    break;
                }
           }
        }

        if(isPrime==1)
            printf("%d ",num);
    }
}
