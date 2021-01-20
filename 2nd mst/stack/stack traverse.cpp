#include<stdio.h>

#define MAXSIZE 101
int data[MAXSIZE];
int top=-1;

void push(int x)
{
	if(top >101)
	{
		printf("\nstack is full man.\n");
	}
	else
	{
		top++;
		data[top]=x;
	}
}

int pop()
{
	int r;
	
	if(top < 0)
	{
		printf("\nstack is empty.\n");
		return '\0';
	}
	else
	{
		r=data[top];
		top--;
		return r;
	}
}

void display()
{
	if(top < 0)
	{
		printf("\nstack is empty you .");
	}
	else
	{
		for(int i=0;i<=top;i++)
	    {
	    	printf("%d\t",data[i]);
		}
	}
	
}

int main()
{
	int n,c,i;
	
	printf("enter the no that you want to enter : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter %d no : ",i+1);
		scanf("%d",&c);
		
		push(c );
	}
	printf("\n\ndata in stack are : \t");
	display();
	
	printf("\n\npopping the term : %d \n",pop());

	printf("\ndata in stack are : \t");
	display();
	return 0;
}
