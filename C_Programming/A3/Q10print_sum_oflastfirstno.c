void main()
{
    int no = 12345;
    int first, last,sum=0;
    
    last = no % 10; 
    int temp = no;
    while (temp >= 10)
    {
        temp = temp/10;
    }
    first = temp;
      sum = first + last;
    printf("First digit = %d\n",first);
    printf("Last digit = %d\n",last);
    printf("Sum of first and last digit = %d\n",sum);
}
