#include<stdio.h>
#include<stdbool.h>
#define MAX_SIZE 100
int Queue[MAX_SIZE],rear=-1,front=-1;
bool isfull()
{
    if(rear==MAX_SIZE)
        return true;
    else
        return false;
}
bool isempty()
{
    if(front==-1&&rear==-1)
        return true;
    else
        return false;
}
void enqueue(int x)
{
    if(front==-1&&rear==-1)
    {
        front=rear=0;
        Queue[rear]=x;
        printf("%d is enqueued into the queue. \n",x);
    }
    else if(isfull()==true)
    {
        printf("Overflow");
    }
    else
    {
        rear++;
        Queue[rear]=x;
        printf("%d is enqueued into the queue. \n",x);
    }
    
}
void dequeue()
{
    int y;
    if(isempty()==true)
    {
        printf("Underflow");
    }
    else
    {
        y=Queue[front];
        printf("%d is dequeued from the queue. \n",y);
        front--;
        return y;
    }
}
void display()
{
    int i;
    if(front==-1&&rear==-1)
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("\nQueue is \n");
        for(i=front;i<rear;i++)
        {
            printf("%d ",Queue[i]);
        }
        printf("%d",Queue[rear]);
    }
}
int main()
{
    isfull();
    isempty();
    enqueue(9);
    enqueue(5);
    enqueue(8);
    dequeue();
    enqueue(3);
    display();
}

