#include<stdio.h>
#include<stdlib.h>
int element,front=-1,rear=-1,queue[10],max=5;
void enqueue();
void dequeue();
void display();
void main()
{

    int ch;
    while(1)
    {
        printf("\nenter choice: \n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        default:
            printf("enter valid input\n");
        }
    }
}void enqueue()
{
    printf("enter elements:\n");
    scanf("%d",&element);
    if(front==-1&&rear==-1)
    {
        front=0;
        rear=0;
        queue[rear]=element;
    }
    else if((rear+1)%max==front)
    {
        printf("overflow\n");
    }
    else
    {
        rear=(rear+1)%max;
        queue[rear]=element;
    }
}
void dequeue()
{
    if(front==-1&&rear==-1)
    {

        printf("underflow\n");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        printf("\ndequeued element:\n",queue[front]);
        front=(front+1)%max;
    }
}
void display()
{
    int i=front;
    if((front==-1)&&(rear==-1))
    {
        printf("empty/n");
    }else
    {
        printf("\nelements are:\n");
        while(i!=rear)
            {
                printf("%d",queue[i]);
                i=(i+1)%max;
            }
            printf("%d",queue[i]);
    }
}
