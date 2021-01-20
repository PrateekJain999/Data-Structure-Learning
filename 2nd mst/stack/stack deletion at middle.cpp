#include<stdio.h>

#define max 100
int top=-1;
int data[max];
int temp[max];

void push(int no)
{
	if(top>99)
	{
		printf("stack is full man");
	}
	else
	{
		top++;
		data[top]=no;
	}
}
int pop()
{
	int r;
	
	if(top<0)
	{
		printf("cant pop man stack is empty");
		return 0;
	}
	else
	{
		r=data[top];
		top--;
		return r;
	}
}
void deletion(int n)
{
	int position,c=0,t;
	
	printf("enter the position where you want to insert : ");
	scanf("%d",&position);
	
	while(c<n-position)
	{
		temp[c]=pop();
		c++;
	}
	pop();
	
	while(c>0)
	{
		c--;
		t=temp[c];
		push(t);
	}
}

int main()
{
	int n,no;
	
	printf("enter the no to be inserted in stack : ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		printf("%d no : ",i+1);
		scanf("%d",&no);
		
		push(no);
	}
	
	printf("\n\ndeletion take place : \n\n");
	
	deletion(n);
	
	printf("\n\ntraversing : \n\n");
	
	for(int i=0;i<=top;i++)
	{
		printf("%d no : %d\n",i+1,data[i]);
	}
	
	return 0;
}
