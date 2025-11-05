#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};
struct node *first = NULL;
struct node *last = NULL;
int count = 0;

void create();
void display();
void reverse(struct node *temp);

int main()
{
	int ch;
	while(1){
		printf("\n1.Create\n2.Dispaly\n3.Reverse\n4.Exit\n");
		printf("Enter your choice :");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				create();
				break;
			case 2:
				display();
				break;
			case 3:
				printf("Reversed list :");
				reverse(first);
				printf("NULL\n");
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid choice.Please try again.\n");
		}
	}
	return 0;
}
void create(){
	int d;
	struct node *newnode = (struct node *)malloc(sizeof(struct node));
	if(newnode==NULL){
		printf("Memory allocation failed.\n");
		return ;
	}
	printf("Enter data :");
	scanf("%d",&d);
	newnode->data=d;
	newnode->next=NULL;
	
	if(first==NULL)
	{
		first=last=newnode;
	}
	else{
		last->next=newnode;
		last=newnode;
	}
	count++;
	printf("Node added successfully\n");
}

void display(){
	if(first==NULL){
		printf("List is empty!\n");
		return;
	}
	struct node *temp = first;
	printf("Linked List:");
	while(temp!=NULL){
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}
 void reverse(struct node *temp) {
    struct node *prev = NULL, *current = first, *next = NULL;
    while (current != NULL) {
        next = current->next; 
        current->next = prev;
        prev = current;      
        current = next;      
    }
    first = prev;
    printf("List reversed successfully!\n");
}
