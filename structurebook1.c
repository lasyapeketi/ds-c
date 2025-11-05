#include<stdio.h>
#include<string.h>
struct book
{
	int pages;
	char bookname[20];
	float cost;
}b1;
int main()
{
	printf("enter the name of the book:");
	scanf("%[^\n]s", b1.bookname);
	getchar();
	printf("\nenter the no of pages of the book:");
	scanf("%d",&b1.pages);
	printf("\nenter the cost of the book:");
	scanf("%f",&b1.cost);
	printf("\nbookname:%s\npages:%d\ncost:%f\n",b1.bookname,b1.pages,b1.cost);
	return 0;
}
