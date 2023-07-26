#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*top,*temp,*newnode;
void push();
void pop();
void peek();
void display();


void main()
{
    int ch;
    while(1)
    {
        printf("enter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            printf("invalid choice:");
            break;}
        }return 0;
    }

void push()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    if(top==NULL)
    {
        top==newnode;
    }
    else{
        newnode->next=top;
        top=newnode;
    }
}
void pop()
{
    if(top==NULL)
    {
        printf("empty\n");
    }
    else{
        temp=top;
        int n;
        n=top->data;
        printf("%d deleted\n",top->data);
        top=top->next;
        temp->next=NULL;
        free(temp);
    }
}void peek()
{
    temp=top;
    printf("%d\n",top->data);
}void display()
{
    if(top==NULL)
{
printf("empty\n");
}
else{
    temp-top;
    printf("elements are\n");
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
}

