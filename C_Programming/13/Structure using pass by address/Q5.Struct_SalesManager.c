typedef struct SalesManager
 {
	int id;
	char name[20];
	int salary;
	int incentive;
	int target;
} SalesManager;

void store(SalesManager*);
void display(SalesManager*);
#include<stdio.h>
void main() 
{
	 SalesManager s1,s2;
	s1.id=101;
	strcpy(s1.name,"Sakshi kanojiya");
	s1.salary=55000;
	s1.incentive=15.0;
	s1.target=10000;
	display(&s1);

    printf("Enter ID,Name,salary,incentive,target\n");
    store(&s2);
    printf("HR 2 details");
    display(&s2);
    
}
    void display(SalesManager* s)
{
    printf("\n ID=%d\n Name=%s\n salary=%d\n incentive=%d\n target=%d\n",s->id,s->name,s->incentive,s->target,s->target);	
}
	
void store(SalesManager* s)
	{

	scanf("%d",&s->id);
	scanf("%s",s->name);
	scanf("%d",&s->salary);
	scanf("%d",&s->incentive);
	scanf("%d",&s->target);

}

