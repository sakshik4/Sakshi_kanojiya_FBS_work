typedef struct date
{
	int day;
	int month;
	int year;
}date;
#include<stdio.h>
void main()
{
	date datearr[5];
	for(int i=0;i<5;i++)
	{
	printf("Enter the %d date",i+1);
	scanf("%d %d %d",&datearr[i].day,datearr[i].month,&datearr[i].year);
	}
	for(int i=0;i<5;i++)
	{
	printf("student details of %d",i+1);
	printf("\nDay=%d",datearr[i].day);
    printf("\nMonth=%d",datearr[i].month);
    printf("\nYear=%d\n",datearr[i].year);

}
    
}