typedef struct Hr
{
	int id;
	char name[20];
	int salary;
	int commission;
}Hr;
#include<stdio.h>
Hr store();
void display();
void main()
{
	struct Hr h1,h2;
	printf("HR 1 details");
	h1.id=101;
    strcpy(h1.name,"Sakshi kanojiya");
    h1.salary=5000000;
    h1.commission=20;
    display(h1);
    
    printf("Enter ID,Name,salary,commission");
    h2=store();
    printf("HR 2 details");
    display(h2);
    
}
void display(Hr h)
{
    printf("\nId=%d\nName=%s\nSalary=%d\ncommission=%d%%\n",h.id,h.name,h.salary,h.commission);	
}

	Hr store()
	{
	Hr h;
	scanf("%d",&h.id);
	scanf("%s",h.name);
	scanf("%d",&h.salary);
	scanf("%d",&h.commission);
	return h;
}
     