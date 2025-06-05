void main()
{
	int hh,min,sec,total_sec;
    printf("Enter hh,min,sec\n");
    scanf("%d,%d,%d",&hh,&min,&sec);
    total_sec=(hh*3600)+(min*60)+sec;
    printf("Total seconds are %d",total_sec);
  
}