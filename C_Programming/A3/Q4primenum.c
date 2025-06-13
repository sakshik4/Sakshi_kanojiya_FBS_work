void main()
{
    int no=7;
	int i = 2;
	int flag = 1;
    if(no<= 1)
    {
        printf("Not a prime number\n");
        return;
    }
    while(i < no)
    {
        if(no % i == 0)
        {
            flag = 0;
            break;
        }
        i++;
    }
    if(flag == 1)
        printf("Prime number\n");
    else
        printf("Not a prime number\n");
}
