#include<stdio.h>
#include<ctype.h>

#define MAXSTACK 100 
#define POSTFIXSIZE 100

int stack[MAXSTACK];
int top = -1 ;

void push(int item)
{

	if(top > MAXSTACK)
	{
		printf("stack over flow");
		return;
	}
	else
	{
		top++ ;
		stack[top]= item;
	}
}

int pop()
{
	int item;
	if(top <0)
	{
		printf("stack under flow");
	}
	else
	{
		item = stack[top];
		top--;
		return item;
	}
}

void display()
{
	int i;
	
	for(i=0;i<=top;i++)
	{
		printf("\nar[%d] : %d" ,i,stack[i]);
	}
}

 
void EvalPostfix(char postfix[])
{

	int i ;
	char ch;
	int val;
	int A, B ;

	for (i = 0 ; postfix[i] != ')'; i++)
	{
		ch = postfix[i];
		if (isdigit(ch))
		{
			/* we saw an operand,push the digit onto stack
			ch - '0' is used for getting digit rather than ASCII code of digit */
			push(ch - '0');
		}
		else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
		{
			A = pop();
			B = pop();

			switch (ch) /* ch is an operator */
			{
				case '*':
				val = B * A;
				break;

				case '/':
				val = B / A;
				break;

				case '+':
				val = B + A;
				break;

				case '-':
				val = B - A;
				break;
			}
			push(val);
		}
	}
	display();
}

int main()
{
	int i ;

	char postfix[POSTFIXSIZE];
	printf("ASSUMPTION: There are only four operators(*, /, +, -) in an expression.\n");
	printf( " \nEnter postfix expression,\npress right parenthesis ')' for end expression : \n\n");

	for (i = 0 ; i <= POSTFIXSIZE - 1 ; i++)
	{
		scanf("%c", &postfix[i]);

		if ( postfix[i] == ')' )
		{
		    break; 
		}
	}

	EvalPostfix(postfix);
	
	return 0;
}
