#include<stdio.h>
struct book{
	char name[50];
	int pages;
	float price;
}b;
void display(struct book b)
{
	printf("\nDisplay information\n");
	printf("Name: %s",b.name);
	printf("\npages:%d",b.pages);
    printf("\nprice:%f",b.price);
}
int main()
{
	struct book b;
	printf("enter name: ");
	scanf("%[^\n]%*c",b.name);
	printf("enter pages:");
	scanf("%d",&b.pages);
	printf("enter price:");
	scanf("%f",&b.price);
	display(b);
	printf("\ntask complete");
	return 0;
}
