typedef struct student
{
	int rollno;
	char name[20];
	int marks;
}student;

#include<stdio.h>
void display(student*);
void store(student*);

void main()
{
    student s1,s2;
	s1.rollno=101;
    strcpy(s1.name,"sakshi kanojiya");
    s1.marks=90;
    
    printf("\nstudent 1 details :");
    display(&s1);


   printf("\n \nEnter Roll no, Name, and Marks for s2:\n");
	store(&s2);
	printf("\nstudent 2 details :");
	display(&s2);
}
	
void display(student*s)
	{
	printf("\n Roll no=%d \n Name=%s\n Marks=%d",s->rollno,s->name,s->marks);
}


void store(student*s)
   {
   	scanf(" %d %s %d",&s->rollno,s->name,&s->marks);
   }
     