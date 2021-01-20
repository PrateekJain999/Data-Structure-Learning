#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;          // Data 
    struct node *next; // Address 
};


node* createList(int n);
node * reverse(node * head);
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
    
    HEAD=reverse(HEAD);
    printf("\n\reverse list is:\n\n");
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

node* reverse(node* head)
{
    struct node *i,*j,*k;
    i=NULL;
    j=head;
    k=j->next;
    
    while(j!=NULL)
    {
    	j->next=i;
    	i=j;
    	j=k;
    	
    	if(k!=NULL)
    	{
    		k=k->next;
		}
	}
	return i;
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
