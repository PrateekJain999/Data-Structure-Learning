#include<stdio.h>

#define MAXSIZE 101
int data[MAXSIZE];
int top=-1;

void push(int x)
{
	if(top>101)
	{
		printf("cant add up man.");
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
		printf("cant pop up man.");
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
	if(top <0)
	{
		printf("stack is empty.");
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
	int c=0,n,i=0,search=0,index=1;
	
	printf("enter the no of stack variable : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter %d no : ",i+1);
		scanf("%d",&c);
		
		push(c );
	}
	
	printf("enter the no to be search : ");
	scanf("%d",&search);
	
	for(i=top;i>=0;i--)
	{
		if(data[i]==search)
		{
			pop();
			break;
		}
		index++;
		pop();
	}
	
	printf("\n\nno is present at the location : %d from end.",index);
	printf("\n\nno is present at the location : %d from start.",(n-index+1));
	
	printf("\n\ndata in stack are : ");
	display();
	
	return 0;
}
