typedef struct SalesManager
{
	int id;
	char name[20];
	int salary;
	int incentive;
	int target;
}SalesManager;
#include<stdio.h>
void main()
{
	SalesManager SalesManagerarr[5];
	for(int i=0;i<5;i++)
	{
	printf("Enter the %d Sales Manager details id name salary incentive target ",i+1);
	scanf("%d %s %d %d %d",&SalesManagerarr[i].id,SalesManagerarr[i].name,&SalesManagerarr[i].salary,&SalesManagerarr[i].incentive,&SalesManagerarr[i].target);
	}
	for(int i=0;i<5;i++)
	{
	printf("Sales Manager details of %d",i+1);
	printf("\nRoll No=%d",SalesManagerarr[i].id);
    printf("\nName=%s",SalesManagerarr[i].name);
    printf("\nSalary=%d",SalesManagerarr[i].salary);
    printf("\nIncentive=%d\n",SalesManagerarr[i].incentive);
    printf("\nTarget=%d\n",SalesManagerarr[i].incentive);

}
    
}