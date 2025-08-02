struct Hr
{
	int id;
	char name[20];
	int salary;
	int commission;
};
#include<stdio.h>
void main()
{
	struct Hr h1,h2;
	h1.id=101;
    strcpy(h1.name,"Sakshi kanojiya");
    h1.salary=5000000;
    h1.commission=20;
    printf("\nId=%d\nName=%s\nSalary=%d\ncommission=%d%%\n",h1.id,h1.name,h1.salary,h1.commission);
	printf("Enter ID,Name,salary,commission");
	scanf("%d",&h2.id);
	scanf("%s",h2.name);
	scanf("%d",&h2.salary);
	scanf("%d",&h2.commission);
}
     