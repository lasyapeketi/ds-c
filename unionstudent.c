#include<stdio.h>
union student{
	int roll;
	char name[100];
	float cgpa;
}s1;
int main()
{
	printf("enter student name:");
	scanf("%s",s1.name);
	printf("\nenter student roll number:");
	scanf("%d",&s1.roll);
	printf("\nenter student cgpa:");
	scanf("%f",&s1.cgpa);
	printf("%s\n%d\n%f\n",s1.name,s1.roll,s1.cgpa);
	return 0;
}
