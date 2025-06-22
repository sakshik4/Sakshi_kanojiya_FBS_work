#include <stdio.h>

void main()
{
    int choice, num;
    char repeat = 'y';
    while (repeat == 'y' || repeat == 'Y') 
	{
        printf("\nMENU ");
        printf("1. To check even or odd number\n");
        printf("2. To check number is prime or not\n");
        printf("3. To check number is palindrome or not\n");
        printf("4. To check number is positive, negative or zero\n");
        printf("5. To reverse a number\n");
        printf("6. To find sum of digits\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("Enter the number: ");
        scanf("%d", &num);
        if (choice==1) {
            if (num%2==0)
                printf("Number is even\n");
            else
                printf("Number is odd\n");
        }
        else if (choice==2) {
            int i=2,flag= 1;
            if (num<=1)
                flag=0;
            else {
                while (i<=num/2) {
                    if (num%i==0) {
                        flag=0;
                        break;
                    }
                    i++;
                }
            }
            if (flag==1)
                printf("Number is prime\n");
            else
                printf("Number is not prime\n");
        }
        else if (choice==3) 
		{
         int temp,rem,reverse;
			temp=num;
			while(num>0)
			{
				rem=num%10;
				num=num/10;
				reverse=(reverse*10)+rem;
			}
			if(temp==reverse)
				printf("number is palindrome");
			else
				printf("number is not palindrome");
        }
        else if (choice==4) {
            if (num>0)
                printf("Number is positive\n");
            else if (num<0)
                printf("Number is negative\n");
            else
                printf("Number is zero\n");
        }
        else if (choice==5)
		 {
            int temp,rem,reverse;
			temp=num;
			while(temp>0)
			{
				rem=temp%10;
				temp=temp/10;
				reverse=(reverse*10)+rem;
            }
            printf("Reverse number = %d\n", reverse);
        }
        else if (choice==6) 
		{
            int rem,sum=0;
			while(num>0)
			{
				rem=num%10;
				sum=sum+rem;
				num=num/10;
			}
            printf("Sum of digits = %d\n",sum);
        }
        else {
            printf("Invalid choice\n");
        }

        printf("\nDo you want to try another option? (y/n): ");
        scanf(" %c", &repeat); 
    }

    printf("\nProgram end\n");
}
