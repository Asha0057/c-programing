#include<stdio.h>
struct node
{
    int data;
    struct node*next;

};
int ch=1,ele;
struct node*newnode,*start=0,*end=0;
void create()
{
    while(ch==1)
    {
        newnode=(struct node*)malloc (sizeof(struct node));
        printf("enter elemenets:\n");
        scanf("%d",&ele);
        newnode->data=ele;
        newnode->next=0;
        if(start==0)
        {
            start=newnode;
            end=newnode;

        }
        else
        {
            end->next=newnode;
            end=newnode;
        }
        newnode->next=start;
        printf("do you want to create again: ");
        scanf("%d", &ch);
    }
}
    void display()
    {
        struct node*temp =start;
        while(temp->next!=start)
        {
            printf("%d ",temp->data);
            temp=temp->next;

        }printf("%d ",temp->data);
        printf("%d  ",end->next);
        printf("%d ",start);
    }
    int main()
    {
        create();
        display();
    }

