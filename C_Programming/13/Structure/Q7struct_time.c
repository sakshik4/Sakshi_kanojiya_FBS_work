struct Time{
	int hr;
	int min;
	int sec;
};
#include<stdio.h>
void main() {
	struct Time t1,t2;
	t1.hr=1;
	t1.min=20;
	t1.sec=45;
	printf("\nTime=%d:%d:%d\n",t1.hr,t1.min,t1.sec);
	printf("Enter hour min and sec");
	scanf("%d",&t2.hr);
	scanf("%d",&t2.min);
	scanf("%d",&t2.sec);
	printf("\nTime=%d:%d:%d\n",t2.hr,t2.min,t2.sec);
}