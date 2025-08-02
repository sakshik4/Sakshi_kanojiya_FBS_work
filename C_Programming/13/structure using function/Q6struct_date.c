typedef struct Date
 {
	int day;
	int month;
	int year;
} Date;

Date store();
void display();
#include<stdio.h>
void main() 
{
	Date d1,d2;
	d1.day=23;
	d1.month=10;
	d1.year=2004;
	display(d1);

    printf("Enter date(Day\month\year)\n");
    d2=store();
    
    printf("Date 2 details");
    display(d2);
    
}
    void display(Date d)
{
    printf("\nDay=%d\nMonth=%d\nYear=%d\n",d.day,d.month,d.year);	
}
	
Date store()
	{
	Date d;
	scanf("%d\%d\%d",&d.day,&d.month,&d.year);
	return d;
}

