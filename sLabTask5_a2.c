#include<stdio.h>
#include<stdbool.h>
#define MAX_SIZE 5

int Queue[MAX_SIZE];
int front=-1;
int rear=-1;

bool isempty()
{
    if(front==-1&&rear==-1)
        return true;
    else
        return false;
}

bool isfull()
{
    if((rear+1)%MAX_SIZE==front)
        return true;
    else
        return false;
}

void enqueue(int x)
{
    if(isfull()==true)
    {
        printf("Overload");
    }
    else if(front==-1&&rear==-1)
    {
        front=rear=0;
        Queue[rear]=x;
        printf("%d is enqueued into Queue\n",Queue[rear]);
    }
    else
    {
        rear=(rear+1)%MAX_SIZE;
        Queue[rear]=x;
        printf("%d is enqueued into Queue\n",Queue[rear]);
    }
}
void dequeue()
{
    if(isempty()==true)
    {
        printf("Underload");
    }
    else if(front==rear)
    {
        front=rear=-1;  
        printf("%d is dequeued from Queue\n",Queue[front]);
    }
    else
    {
        printf("%d is dequeued from Queue\n",Queue[front]);
        front=(front+1)%MAX_SIZE;
    }
}
void display()
{
    int i=front;
    if(front==-1&&rear==-1)
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("\nQueue is \n");
        while(i!=rear)
        {
            printf("%d ",Queue[i]);
            i=(i+1)%MAX_SIZE;
        }
        printf("%d",Queue[rear]);
    }
}
void main()
{
    isfull();
    isempty();
    enqueue(5);
    enqueue(7);
    enqueue(10);
    dequeue();
    enqueue(11);
    display();  
}
