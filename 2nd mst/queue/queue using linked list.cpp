#include <stdio.h>
#include <stdlib.h>
 
typedef struct Node
{
	int data;
	struct Node *next;
}node;
 
node *head=NULL;		
 
void EnQueque(int data);
int DeQueue();
void print(node *p);
 
int main()
{
	int n,c;
	
	printf("enter the Num of elements : ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		printf("enter the %d element : ",i+1);
		scanf("%d",&c);
		
		EnQueque(c);
	}
	
	DeQueue();			
	
	print(head);		
	
	return 0;
}
 
void EnQueque(int data)
{
	node *temp = (node*)malloc(sizeof(node));
	temp->data = data;
	temp->next = NULL;
	
	
	if(head==NULL)
	{
		head = temp;
		return;
	}
	node *traverse=head;
	
	while(traverse->next)
		traverse = traverse->next;
	
	traverse->next = temp;
}
 
int DeQueue()
{
	node* temp = head;
	head = head->next;
	
	int data = temp->data;
	
	free(temp);
	
	return data;
}

void print(node *p)
{
	printf("\n\nqueue elements are as follows : \n\n");
	
	while(p!=NULL)
	{
		printf("%d->\t",p->data);
		p=p->next;
	}
}
 
