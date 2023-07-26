
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*head,*temp,*newnode,*next;
void create(){
    int i,n;
    printf("size");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
        temp=newnode;

        }
    }

}
void insertmid()
{
    int pos,i=0,ele;
    printf("enter pos");
    scanf("%d",&pos);
    newnode=(struct node*)malloc(sizeof(struct node));
    puts("ENTER THE ELEMENT: ");
    scanf("%d",&ele);
    temp=head;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    newnode->data=ele;
    newnode->next=temp->next;
    temp->next=newnode;
    printf("NODE IS CREATED");
}
void display(){
        printf("display\n");
        temp=head;
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;

        }

}
void main()
{
    create();
    insertmid();
    display();

}
