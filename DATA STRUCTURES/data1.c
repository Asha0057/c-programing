#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*head,*temp,*newnode,*prev;
void  main()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&newnode->data);
    head->next=NULL;
    head->prev=NULL;
    if(head=NULL)
    {
       head=newnode;
    }
    else
    {
        head->next=newnode;
        newnode->prev=head;
    }
    newnode->next=NULL;
    newnode->prev=NULL;
    if (head=NULL)
    {
        head->temp=newnode;
    }
    else
    {
        temp->next=newnode;
        newnode->prev
    }
    printf("insertion at the beg");
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    head->prev=newnode;
    newnode->next=head;
    head=newnode;

}
