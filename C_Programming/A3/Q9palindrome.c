void main()
{
    int no=121;
    int temp=no;
    int reversed=0;

    while (temp>0)
    {
        int digit=temp%10;
        reversed = reversed*10+digit;
        temp = temp/10;
    }

    if (reversed==no)
    {
        printf("%d is a Palindrome number\n", no);
    }
    else
    {
        printf("%d is not a Palindrome number\n", no);
    }
}
