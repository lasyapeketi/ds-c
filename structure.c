#include<stdio.h>
#include<string.h>
struct student
{
	int rollnumber;
	char name[50];
    float cgpa;
}s1;
int main()
{
	printf("enter roll number");
	scanf("%d",&s1.rollnumber);
	printf("enter name");
	scanf("%s",s1.name);
	printf("enter cgpa");
	scanf("%f",&s1.cgpa);
	printf("%d\n%s\n%f\n",s1.rollnumber,s1.name,s1.cgpa);
	return 0;
	
}
