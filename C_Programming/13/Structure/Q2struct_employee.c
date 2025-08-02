struct employee
{
	int id;
	char name[20];
	int salary;
};
#include<stdio.h>
void main()
{
	struct employee emp1,emp2;
	emp1.id=101;
    strcpy(emp1.name,"Sakshi kanojiya");
    emp1.salary=30000;
    printf("\nId=%d\nName=%s\nSalary=%d\n",emp1.id,emp1.name,emp1.salary);
	printf("Enter ID,Name,salary");
	scanf("%d",& emp2.id);
	scanf("%s", emp2.name);
	scanf("%d",& emp2.salary);

}
     