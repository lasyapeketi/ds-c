#include<stdio.h>
struct dob
{
	int dd;
	int mm;
	int yyyy;
}d;
struct employee
{
	char name[50];
	struct dob;
	float salary;
}e1;
int main()
{
	printf("enter employee name:");
	scanf("%s",e1.name);
	printf("\nenter date month and year of birth:");
	scanf("%d%d%d",&d.dd,&d.mm,&d.yyyy);
	printf("\nenter the salary:");
	scanf("%f",&e1.salary);
	printf("%s\n%d-%d-%d\n%f\n",e1.name,d.dd,d.mm,d.yyyy,e1.salary);
	return 0;
	
}
