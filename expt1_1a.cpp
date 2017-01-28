//pass by reference
#include<stdio.h>
#include<string.h>
struct student
{
	char name[7];
	int rollno;
}s1;


void output(student *s2);
	
int main()
{
	printf("Enter the name and roll no. of student");
	scanf("%s %d",s1.name,&s1.rollno);
	output(&s1);
	return 0;
}


void output(student *s2)
{
	strcpy(s2 -> name,"diksha");
	s2 -> rollno= 36;
	printf("Name:%s",s2->name);
	printf("\nRoll no.:%d",s2->rollno);
}
