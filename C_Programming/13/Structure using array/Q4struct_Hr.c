typedef struct Hr
{
	int rollno;
	char name[20];
	int salary;
	int commission;
}student;
#include<stdio.h>
void main()
{
	student Hrarr[5];
	for(int i=0;i<5;i++)
	{
	printf("Enter the %d student details rollno name marks",i+1);
	scanf("%d %s %d %d",&Hrarr[i].rollno,Hrarr[i].name,&Hrarr[i].salary,&Hrarr[i].commission);
	}
	for(int i=1;i<5;i++)
	{
	printf("student details of %d",i+1);
	printf("\nRoll No=%d",Hrarr[i].rollno);
    printf("\nName=%s",Hrarr[i].name);
    printf("\nSalary=%d",Hrarr[i].salary);
    printf("\nCommission=%d\n",Hrarr[i].commission);

}
    
}