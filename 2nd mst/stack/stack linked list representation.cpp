#include<stdio.h>
#include<stdlib.h>

struct stack
{
	int data;
	struct stack *next;
};

stack * pushLink(int n);     /* Functions to create and display list*/
void traverseList(stack *head);
void pop(stack *head);

int main()
{
    int n;
    stack *HEAD=NULL;
    
    printf("how many nodes: ");
    scanf("%d", &n);

    HEAD=pushLink(n);
    pop(HEAD);
    pop(HEAD);
    
    printf("\nData in the list \n");
    traverseList(HEAD);

    return 0;
}

stack * pushLink(int n)
{
    stack *head=NULL, *temp=NULL,*p=NULL;
    int i;

    
    for(i=0; i<n; i++)
    {
        temp = (stack*)malloc(sizeof(stack)); // creating isolated node one by one.

        printf("Enter the data of node %d: ", i+1);
        scanf("%d", &(temp->data));

        temp->next = NULL;

        if(head==NULL) //if list is currently empty , the make temp as first node.
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

void traverseList(stack * head)
{
    struct stack *p=head;

    // Return if list is empty 
    if(head == NULL)
    {
        printf("List is empty.");
        return;
    }

    while(p != NULL)
    {
        printf("%d ->  ", p->data); // Print data of current node
        p = p->next;                 // Move to next node
    }
}
void pop(stack *head)
{
	stack *temp=head,*p=NULL;
	
	while(temp->next!=NULL)
	{
		p=temp;
		temp=temp->next;
	}
	printf("\n\npopping element is : %d\n\n",temp->data);
	free(p->next);
	p->next=NULL;
	
	
}
