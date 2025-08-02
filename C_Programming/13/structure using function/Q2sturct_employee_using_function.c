typedef struct employee
{
	int id;
	char name[20];
	int salary;
}employee;
#include<stdio.h>
void display();
employee store();
void main()
{
	struct employee emp1,emp2;
	
	printf("Employee 1 details");
    strcpy(emp1.name,"Sakshi kanojiya");
    emp1.salary=30000;
    display(emp1);
    
    printf("Enter employee details Id,Name,salary ");
    emp2=store();
    printf("Employee 2 details");
    display(emp2);
    
}
    void display(employee e)
    {
    printf("\nId=%d\nName=%s\nSalary=%d\n",e.id,e.name,e.salary);
}
    
    
employee store()
{
	employee e;
	scanf("%d",&e.id);
	scanf("%s",e.name);
	scanf("%d",&e.salary);
	return e;

}

     