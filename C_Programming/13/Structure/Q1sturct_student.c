struct student
{
	int rollno;
	char name[20];
	int marks;
};
#include<stdio.h>
void main()
{
	struct student s1,s2;
	s1.rollno=101;
    strcpy(s1.name,"sakshi kanojiya");
    s1.marks=90;
	printf("\nEnter Roll no=%d,,Name=%s,Marks=%d,Mobile number=%lld",s1.rollno,s1.name,s1.marks);
	printf("Enter Roll no,Name,Marks");
	scanf("%d",&s2.rollno);
	scanf("%s",s2.name);
	scanf("%d",&s2.marks);
}
     