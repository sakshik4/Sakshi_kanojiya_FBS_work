typedef struct Time
{
	int hour;
	int min;
	int sec;
}Time;
#include<stdio.h>
void main()
{
	Time Timearr[5];
	for(int i=0;i<5;i++)
	{
	printf("Enter the %d Time(hour,min,sec)",i+1);
	scanf("%d %d %d",&Timearr[i].hour,&
	Timearr[i].min,&Timearr[i].sec);
	}
	for(int i=0;i<5;i++)
	{
	printf("Time details of %d\n",i+1);
	printf("%d:%d:%d\n",Timearr[i].hour,Timearr[i].min,Timearr[i].sec);

}
    
}