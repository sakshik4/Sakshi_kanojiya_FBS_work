void main()
{
	int arr[5]={1,2,3,4,5};
	int brr[5]={10,20,30,40,50};
	int crr[5];
	for(int i=0;i<5;i++)
	{
	crr[i]=arr[i]+brr[i];
	printf("\n arr %d",arr[i]);
	printf("\n brr is %d",brr[i]);
	printf("\n addition of arr and brr is %d",crr[i]);
}
}