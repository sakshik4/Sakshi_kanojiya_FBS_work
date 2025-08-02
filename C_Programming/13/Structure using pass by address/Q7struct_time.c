typedef struct Time
 {
	int hr;
	int min;
	int sec;
} Time;

void Timestore(Time* );
void display(Time* );
#include<stdio.h>
void main() 
{
	Time t1,t2;
	t1.hr=1;
	t1.min=10;
	t1.sec=4;
	printf("Time 1 details");
	display(&t1);

    printf("\nEnter Time(hr,min,sec)\n");
    Timestore(&t2);
    
    printf("Time 2 details");
    display(&t2);
    
}
    void display(Time* t)
{
    printf("\nhr:min:sec\n%d:%d:%d\n",t->hr,t->min,t->sec);	
}
	
void Timestore(Time* t)
	{

	scanf("%d%d%d",&t->hr,&t->min,&t->sec);

}

