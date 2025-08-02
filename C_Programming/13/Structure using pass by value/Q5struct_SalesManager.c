typedef struct SalesManager
 {
	int id;
	char name[20];
	int salary;
	int incentive;
	int target;
} SalesManager;

SalesManager store();
void display();
#include<stdio.h>
void main() 
{
	SalesManager s1,s2;
	s1.id=101;
	strcpy(s1.name,"Sakshi kanojiya");
	s1.salary=55000;
	s1.incentive=15.0;
	s1.target=10000;
	display(s1);

    printf("Enter ID,Name,salary,incentive,target\n");
    s2=store();
    printf("HR 2 details");
    display(s2);
    
}
    void display(SalesManager h)
{
    printf("\nID=%d\n Name=%s\n salary=%d\n incentive=%d\n target=%d\n",h.id,h.name,h.incentive,h.target,h.target);	
}
	
SalesManager store()
	{
	SalesManager s;
	scanf("%d",&s.id);
	scanf("%s",s.name);
	scanf("%d",&s.salary);
	scanf("%d",&s.incentive);
	scanf("%d",&s.target);
	return s;

}

