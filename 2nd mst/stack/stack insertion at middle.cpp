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
	}
	else
	{
		r=data[top];
		top--;
		return r;
	}
}
void insertion(int n)
{
	int position,num,c=-1,t;
	
	printf("enter the position where you want to insert : ");
	scanf("%d",&position);
	
	printf("\nenter the num to be inserted : ");
	scanf("%d",&num);
	
	while(c<n-position)
	{
		c++;
		temp[c]=pop();
	}
	push(num);
	
	while(c>-1)
	{
		t=temp[c];
		--c;
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
	
	printf("\n\ninsertion take place : \n\n");
	
	insertion(n);
	
	printf("\n\ntraversing : \n\n");
	
	for(int i=0;i<=top;i++)
	{
		printf("%d no : %d\n",i+1,data[i]);
	}
	
	return 0;
}
