void main()
{
    int start,end;
    printf("Enter the starting and ending range ");
    scanf("%d%d",&start,&end);
    for (int j=start;j<=end;j++)
    {
        int no=j;
        int rem,res=0;
        int temp=no;
        while(no!=0)
        {
            rem=no%10;
            res=res+(rem * rem * rem);
            no=no/10;
        }
        if (res==temp)
        {
            printf("%d is Armstrong number\n",temp);
        }
    }
}
