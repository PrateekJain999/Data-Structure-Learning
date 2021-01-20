#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * prev;
    struct node * next;
};

int searchList(int value,node* head);
node* createList(int n);
void displayListFromFirst(node *head);
void displayListFromEnd(node *head);


int main()
{
    int n, choice,index;
    struct node* HEAD=NULL;
    
    printf("Enter the number of nodes you want to create: ");
    scanf("%d", &n);

    HEAD=createList(n); // Create list of n nodes
    
    printf("\nenter data to be search : ");
    scanf("%d", &choice);
    
    index=searchList(choice,HEAD);
    
    if(index>=0)
    {
    	printf("element is present at : %d",index+1);
	}
	else
    {
    	printf("element is not present.");
	}
	
    

    return 0;
}

node * createList(int n)
{
	struct node *temp=NULL,*p=NULL,*head=NULL;
	
	for(int i=0;i<n;i++)
	{
		temp=(node *)malloc (sizeof(node));
		
		printf("enter the %d node : ",i+1);
		scanf("%d",&(temp->data));
		
		temp->next=NULL;
		temp->prev=NULL;
		
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
			temp->prev=p;
		}
	}
	return head;
}

int searchList(int value, node *head)
{
	struct node *p=head;
	int index=0;
	
	while(value!=p->data)
	{
		p=p->next;
		index++;
	}
	return index;
}
