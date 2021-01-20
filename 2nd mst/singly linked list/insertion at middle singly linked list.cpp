#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;          // Data 
    struct node *next; // Address 
};

node* createList(int n);
node * insertNodeAtMiddle(node * head);
void displayList(node * head);

int main()
{
	node *HEAD=NULL;
	int n;
	
	printf("how many nodes : ");
	scanf("%d",&n);
	
	HEAD=createList(n);
	
	printf("\n\nEntered nodes are: \n\n");
	displayList(HEAD);
    
    insertNodeAtMiddle(HEAD);
    
	printf("\n\nEntered nodes are: \n\n");
	displayList(HEAD);
    
	return 0;
}
    
node * createList(int n)
{
	node *head=NULL,*temp=NULL,*p=NULL;
	int i;
	
	for(i=0;i<n;i++)
	{
		temp=(node *)malloc(sizeof(node));
		
		printf("enter the %d node : ",i+1);
		scanf("%d",&(temp->data));
		
		temp->next=NULL;
		
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		p=head;
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next=temp;
	}
}
	return head;
}

node* insertNodeAtMiddle(node* head)
{
    int i,position;
    struct node *newnode=NULL, *p=head;
    
    printf("\n\nenter the position: ");
    scanf("%d",&position);
    
	newnode=(node *)malloc(sizeof(node));
	
	printf("enter the new value: ");
	scanf("%d",&(newnode->data));
	
	for(i=1;i<position-1;i++)
    {
    	p=p->next;
	}
	
	newnode->next=p->next;
	p->next=newnode;
}

void displayList(node * head)
{
	struct node *p=head;
	while(p != NULL)
	{
		printf("%d->\t",p->data);
		p=p->next;
	}
}
