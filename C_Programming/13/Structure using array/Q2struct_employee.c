typedef struct employee
{
	int id;
	char name[20];
	int salary;
}employee;
#include<stdio.h>
void main()
{
	employee employeearr[5];
	
	
    for(int i=0;i<5;i++)
    {
    printf("Enter details of Employee %d",i+1);	
    scanf("%d %s %d",&employeearr[i].id,employeearr[i].name,&employeearr[i].salary);
}
    
    
  for(int i=0;i<5;i++)
{
	printf("Employee details of %d\n",i+1);
	printf("\nId=%d",employeearr[i].id);
	printf("\nName=%s",employeearr[i].name);
	printf("Salary=%d\n",employeearr[i].salary);


}
}

     