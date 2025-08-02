typedef struct Distance
 {
	int inch;
	int feet;
}Distance;

Distance store();
void display();
#include<stdio.h>
void main() 
{
	Distance d1,d2;
	d1.inch=1;
	d1.feet=10;
	printf("Distance 1 details");
	display(d1);

    printf("\nEnter Distance(inch feet)\n");
    d2=store();
    
    printf("Distance 2 details");
    display(d2);
    
}
    void display( Distance d)
{
    printf("\nInch=%d \nFeet=%d\n",d.inch,d.feet);	
}
	
Distance  store()
	{
	 Distance d;
	scanf("%d%d",&d.inch,&d.feet);
	return d;
}

