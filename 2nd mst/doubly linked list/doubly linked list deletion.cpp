#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * prev;
    struct node * next;
};

void deletenodefirst(node* head);
void deletenodeend(node* head);
void deletenodemiddle(int pos,node* head);
node* createList(int n);
void displayListFromFirst(node *head);
void displayListFromEnd(node *head);


int main()
{
    int n,c, choice,pos,value;
    struct node* HEAD=NULL;
    
    printf("Enter the number of nodes you want to create: ");
    scanf("%d", &n);

    HEAD=createList(n); // Create list of n nodes
    
	printf("\nenter pos : ");
    scanf("%d", &pos);

    if(pos==1)
    {
    	deletenodefirst(HEAD);
    }
    else if(pos== n)
    {
    	deletenodeend(HEAD);
    }
    else
    {
    	deletenodemiddle(pos,HEAD);
    }
    
    printf("\nPress 1 to display list from First");
    printf("\nPress 2 to display list from End : ");
    scanf("%d", &choice);

    if(choice==1)
    {
    	printf("\n\n\ndisplaying list from First: \n\n");
        displayListFromFirst(HEAD);
    }
    else if(choice == 2)
    {
    	printf("\n\n\ndisplaying list from end: \n\n");
        displayListFromEnd(HEAD);
    }

    return 0;
}

void deletenodefirst(node * head)
{
    node *p=head,*temp=NULL;
    
	temp=p;
    
	while(p!=NULL)
    	{
    		p=p->next;
		}
	free(temp);
}
void deletenodemiddle(int pos,node * head)
{
	node *p=head;
	
    for(int i=1; i<pos && p!=NULL; i++)
        {
            p = p->next;
        }
        
        p->prev->next = p->next;
        p->next->prev = p->prev;

        free(p);
}
void deletenodeend(node * head)
{
	node *p=head;
	
    	while(p->next->next!=NULL)
    	{
    		p=p->next;
		}
		p->next=NULL;
		free(p->next);
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

void displayListFromFirst(node *head)
{
	node *p=head;
	
	while(p!=NULL)
	{
		printf("%d->\t",p->data);
		p=p->next;
	}
}

void displayListFromEnd(node *head)
{
	struct node *p=head;
	
	while(p->next!=NULL)
	{
		p=p->next;
	}

	while(p!=NULL)
	{
		printf("%d->\t",p->data);
		p=p->prev;
	}
}
