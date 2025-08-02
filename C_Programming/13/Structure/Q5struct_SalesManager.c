struct SalesManager {
	int id;
	char name[20];
	int salary;
	int incentive;
	int target;
};
#include<stdio.h>
void main() {
	struct SalesManager s1,s2;
	s1.id=101;
	strcpy(s1.name,"Sakshi kanojiya");
	s1.salary=55000;
	s1.incentive=15.0;
	s1.target=10000;
	printf("\nId=%d\nName=%s\nSalary=%d\nincentive=%d\ntarget=%d\n",s1.id,s1.name,s1.salary,s1.incentive,s1.target);
	printf("Enter ID,Name,salary,commission");
	scanf("%d",&s2.id);
	scanf("%s",s2.name);
	scanf("%d",&s2.salary);
	scanf("%d",&s2.incentive);
	scanf("%d",&s2.target);
}
