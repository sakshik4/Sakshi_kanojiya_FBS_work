
typedef struct student
{
	int rollno;
	char name[20];
	int marks;
}student;
#include<stdio.h>
void main()
{
	student studentarr[5];
	for(int i=0;i<5;i++)
	{
	printf("Enter the %d student details rollno name marks",i+1);
	scanf("%d %s %d",&studentarr[i].rollno,studentarr[i].name,&studentarr[i].marks);
	}
	for(int i=0;i<5;i++)
	{
	printf("student details of %d",i+1);
	printf("\nRoll No=%d",studentarr[i].rollno);
    printf("\nName=%s",studentarr[i].name);
    printf("\nMarks=%d\n",studentarr[i].marks);

}
    
}