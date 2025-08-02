typedef struct admin
{
	int rollno;
	char name[20];
	int salary;
	int allowance;
}student;
#include<stdio.h>
void main()
{
	student adminarr[5];
	for(int i=0;i<5;i++)
	{
	printf("Enter the %d student details rollno name marks",i+1);
	scanf("%d %s %d %d",&adminarr[i].rollno,adminarr[i].name,&adminarr[i].salary,&adminarr[i].allowance);
	}
	for(int i=0;i<5;i++)
	{
	printf("student details of %d",i+1);
	printf("\nId=%d",adminarr[i].rollno);
    printf("\nName=%s",adminarr[i].name);
    printf("\nSalary=%d\n",adminarr[i].salary);
    printf("\nAllowance=%d\n",adminarr[i].allowance);

}
    
}