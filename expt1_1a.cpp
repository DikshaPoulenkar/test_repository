//pass by reference
#include<stdio.h>
#include<string.h>
struct students
{
	char name[7];
	int rollno;
	char stream[20];
}s1;


void output(students *s2);
	
int main()
{
	printf("Enter the name and roll no. , and stram of student");
	scanf("%s %d %s",s1.name,&s1.rollno,&s1.stream);
	output(&s1);
	return 0;
}


void output(students *s2)
{
	strcpy(s2 -> name,"diksha");
	s2 -> rollno= 36;
	strcpy(s2->stream,"Science");
	printf("Name:%s",s2->name);
	printf("\nRoll no.:%d",s2->rollno);
	printf("\nStream:%s",s2->stream);
}
