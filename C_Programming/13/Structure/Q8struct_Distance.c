struct Distance{
	int inch;
	int feet;
};
#include<stdio.h>
void main() {
	struct Distance d1,d2;
	d1.inch=12;
	d1.feet=1;
	printf("\nDistance :%dinch =%d feet \n",d1.inch,d1.feet);
	printf("Enter inch and feet ");
	scanf("%d",&d2.inch);
	scanf("%d",&d2.feet);
	printf("\nDistance :%dinch =%d feet \n",d2.inch,d2.feet);
}