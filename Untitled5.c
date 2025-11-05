#include<stdio.h>
struct student
{
   char name[15];
   int roll;
   char gender;
}s1,s2;
int main()
{
	struct student s1,s2;
	printf("enter name of student:");
	scanf("%s",s1.name);
	printf("enter roll of student:");
	scanf("%d",&s1.roll);
	printf("enter gender of student:");
	scanf("%c",&s1.gender);
	s2=s1;
	printf("the student details are");
	printf("name:%s\nroll:%d\ngender:%c",s2.name,s2.roll,s2.gender);
	return 0;
}
