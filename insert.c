#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
struct node*first=NULL;
struct node*last=NULL;
int coount=0;
void create();
void diplay();
int main(){
	int ch;
	while(1){printf("\n1.create\n2.Display\n3.Exit\n");
	  printf("enter your choice\n");
	  scanf("%d",&ch);
	  switch(ch){
	  	case 1:
	  		create();
	  		break;
	  	case 2:
	  		display();
	  		break;
	  	case 3:
	  		exit(0);
	  	default:
		  printf("Invalid choice please try again\n");
	  }	
	}
	return 0;
}
void create(){
	int d;
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode=NULL){
		printf("Memory allocation failed\n");
		return;
	}
	printf("enter data:");
	scanf("%d",&d);
	newnode->data=d;
	newnode->next=NULL;
	if(first==NULL){
		first=last=newnode;
		}
		else{
			last->next=newnode;
			last=newnode;
		}
	printf("newnode added successfully!\n");
}
void display(){
	if(first=NULL){
		printf("list is empty!\n");
		return;
	}
	struct node*temp=first;
	printf("Linked list:");
	while(temp!=NULL){
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}
void insert(){
	int pos,x,count=0;
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter position to insert (1-%d):",count+1);
	scanf("%d",&pos);
	printf("enter data:");
	scanf("%d",&x);
	newnode->data=x;
	newnode->next=NULL;
	if(pos<1 || pos >count+1)
	{
		printf("Invalid positio!\n");
	}
	free(newnode);
	return;
   if(pos==1)
    {
   		newnode->next=first;
	    first=newnode;
    }
    else{
    	struct node*temp=first;
    	int i;
    	for(i=1;i<pos-1;i++){
    		temp=temp->next;
		}
		newnode->next=temp->next;
		temp->next=newnode;
		if(pos==count+1){
			last=newnode;
		}
	}
	count++;
}
