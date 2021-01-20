#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * prev;
    struct node * next;
};

node * insert_position(int pos, int value,node* head);
node* createList(int n);
void displayListFromFirst(node *head);
void displayListFromEnd(node *head);


int main()
{
    int n, choice,pos,value;
    struct node* HEAD=NULL;
    
    printf("Enter the number of nodes you want to create: ");
    scanf("%d", &n);

    HEAD=createList(n); // Create list of n nodes
    
    printf("\nenter value : ");
    scanf("%d", &value);
	printf("\nenter pos : ");
    scanf("%d", &pos);
    
    HEAD=insert_position(pos,value,HEAD);
    
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

node* insert_position(int pos, int value,node * head)
  {
    node *cur=head,*temp;
    int count=0;
    
    temp=(node *)malloc (sizeof(node));
    temp->data=value;
    
    if(pos==1)
    {
        if(cur == NULL)
        {
            temp -> next = NULL;
            cur = temp;
        }
        else
        {
           temp -> next = cur;
           cur = temp;
        }
        return cur;
	}
	else
	{
		while(cur!=NULL)
        {
            count++;
            if(count==pos-1)
            {
                temp->next=cur->next;
                cur->next=temp;
                temp->prev=cur;
                temp->next->prev=temp;
            }
            cur=cur->next;
        }
        return head ;
	}
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
