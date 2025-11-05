#include<stdio.h>
struct student 
{
	int rollno;
	float marks;
	float cgpa;
}s[5];
int main()
{
	int i;
	printf("enter the record of 5 students");
	for(i=0;i<5;i++)
	{
		printf("\nenter roll number:");
		scanf("%d",&s[i].rollno);
		printf("\nenter marks:");
		scanf("%f",&s[i].marks);
		printf("\nenter cgpa:");
		scanf("%f",&s[i].cgpa);
	}
	printf("details of 5 students\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n%f%f\n",s[i].rollno,s[i].marks,s[i].cgpa);
	}
	printf("size:%d",sizeof(struct student));
	printf("size:%d",sizeof(s));

	int totalmarks=0,avg;
	for(i=0;i<5;i++)
	{
		totalmarks+=s[i].marks;
		int avg=totalmarks/5;
	}
	printf("sum=%d\navg=%d\n",totalmarks,avg);
	return 0;
}
