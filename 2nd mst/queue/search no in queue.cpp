#include<stdio.h>   
#include<stdlib.h>  

#define maxsize 100  
int front = -1, rear = -1;
int queue[maxsize];

int dequeue();
void enqueue(int data);    
void display();    
int searchList(int n);
 
int main ()  
{  
    int n,data,search;
	
	printf("enter the no of elements : ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		printf("enter the %d data : ",i+1);
	    scanf("%d",&data);
		
		enqueue(data);
	}  

	printf("Num is present at : %d",searchList(n)+1);
	return 0;
}  
void enqueue(int data)  
{        
    if(rear == maxsize-1)  
    {  
        printf("\nOVERFLOW\n");  
        return;  
    }  
    if(front == -1 && rear == -1)  
    {  
        front = rear = 0;  
    }  
    else   
    {  
        rear = rear+1;  
    }  
    queue[rear] = data;    
}  
  
      
void display()  
{  
    int i;  
    if(rear == -1)  
    {  
        printf("\nEmpty queue\n");  
    }  
    else  
    {   printf("\nprinting values .....\n");  
        for(i=front;i<=rear;i++)  
        {  
            printf("%d\n",queue[i]);  
        }     
    }  
}
int dequeue()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return 0;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue[front]);
        front = front + 1;
        return queue[front-1];
    }
}
int searchList(int n)
{
	int index=0,i,search;
	
	printf("enter the element to be search : ");
	scanf("%d",&search);
	
	while(search!=queue[index])
	{
		
		index++;
	}
	return index;
}
