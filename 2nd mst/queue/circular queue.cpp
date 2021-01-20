#include <stdio.h>

#define SIZE 100

int items[SIZE];
int front = -1, rear =-1;


void enQueue(int element)
{
    if((front == rear + 1) || (front == 0 && rear == SIZE-1)) 
	{
		printf("\n Queue is full!! \n");
	}
    else
    {
        if(front == -1) front = 0;
        rear = (rear + 1) % SIZE;
        items[rear] = element;
    }
}


int deQueue()
{
    int element;
    
    if(front == -1) 
	{
        printf("\n Queue is empty !! \n");
        return(-1);
    } 
	else 
	{
        element = items[front];
        if (front == rear){
            front = -1;
            rear = -1;
        } /* Q has only one element, so we reset the queue after dequeing it. ? */
        else {
            front = (front + 1) % SIZE;
            
        }
        printf("\n Deleted element -> %d \n", element);
        return(element);
    }
}




void display()
{
    int i;
    if(front == -1) printf(" \n Empty Queue\n");
    else
    {
        printf("\n Front -> %d ",front);
        printf("\n Items -> ");
        for( i = front; i!=rear; i=(i+1)%SIZE) {
            printf("%d ",items[i]);
        }
        printf("%d ",items[i]);
        printf("\n Rear -> %d \n",rear);
    }
}

int main()
{
    int n,c,i;
    
    printf("enter the Num of elements: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
    	printf("enter the %d element : ",i+1);
        scanf("%d",&c);
        
        enQueue(c);
	}
    
    display();
    deQueue();
    
    display();
    
    enQueue(7);
    display();
    
    // Fails to enqueue because front == rear + 1
    enQueue(8);
    
    return 0;
}
