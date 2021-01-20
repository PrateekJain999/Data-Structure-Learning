#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top = -1;
char stack[100];
 
// function prototypes
void push(char);
void pop();
void find_top();
 
main()
{
	int i;
	char a[100];
	printf("enter expression\n");
	scanf("%s", &a);
	for (i = 0; a[i] != '\0';i++)
	{
		if (a[i] == '(')
		{
			push(a[i]);
		}
		else if (a[i] == ')')
		{
			pop();
		}
	}
	find_top();
}
 
// to push elements in stack
void push(char a)
{
    top++;
	stack[top] = a;
}
 
// to pop elements from stack
void pop()
{
	if (top == -1)
	{
		printf("expression is invalid\n %d",top);
		exit(0);
	}	
	else
	{		
		top--;
	}
}

void find_top()
{
	if (top == -1)
		printf("\nexpression is valid\n");
	else
		printf("\nexpression is invalid\n");
}
