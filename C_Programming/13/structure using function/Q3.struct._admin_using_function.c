typedef struct admin
{
	int id;
	char name[20];
	int salary;
	int allowance;
}admin;
admin store();
void display();
#include<stdio.h>
void main()
{
	struct admin a1,a2;
	printf("Admin 1 details ");
	a1.id=101;
    strcpy(a1.name,"Sakshi kanojiya");
    a1.salary=30000;
    a1.allowance=20;
    display(a1);
    
    printf("Enter details of admin Id,Nmae,Salary,Allowance");
    a2=store();
    printf(" Admin 2 details ");
    display(a2);
}
void display(admin a)
	{
	    printf("\nId=%d \nName=%s \nSalary=%d \nAllowance=%d%%\n",a.id,a.name,a.salary,a.allowance);
}
	
admin store()
{
	admin a;
	scanf("%d",&a.id);
	scanf("%s",a.name);
	scanf("%d",&a.salary);
	scanf("%d",&a.allowance);
	return a;

}
     