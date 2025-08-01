#include <stdio.h>
void main()
{
	int arr[10];
	printf("Enter elements of array");
		for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("prime number in array are");
	for (int i=1;i<10;i++)
    {
    	int num=arr[i];
        int flag=1;
        if (num<=1)
            flag=0;
        else
        {
            for (int j=2;j<=num/2;j++)
            {
                if(num%j==0)
                {
                    flag=0;
                    break;
                }
            }
        }

        if (flag==1)
        {
            printf("%d\n",num);
        }
    }
}