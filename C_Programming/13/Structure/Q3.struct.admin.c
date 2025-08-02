struct admin
{
	int id;
	char name[20];
	int salary;
	int allowance;
};
#include<stdio.h>
void main()
{
	struct admin a1,a2;
	a1.id=101;
    strcpy(a1.name,"Sakshi kanojiya");
    a1.salary=30000;
    a1.allowance=20;
    printf("\nId=%d\nName=%s\nSalary=%d\nAllowance=%d%%\n",a1.id,a1.name,a1.salary,a1.allowance);
	printf("Enter ID,Name,salary,Allowance");
	scanf("%d",& a2.id);
	scanf("%s",a2.name);
	scanf("%d",& a2.salary);
	scanf("%d",& a2.allowance);
}
     