struct Date{
	int date;
	int month;
	int year;
};
#include<stdio.h>
void main() {
	struct Date d1,d2;
	d1.date=23;
	d1.month=10;
	d1.year=2004;
	printf("\nDate=%d/%d/%d\n",d1.date,d1.month,d1.year);
	printf("Enter Date Month Year");
	scanf("%d",&d2.date);
	scanf("%d",&d2.month);
	scanf("%d",&d2.year);
	printf("\nDate=%d/%d/%d\n",d2.date,d2.month,d2.year);
}
