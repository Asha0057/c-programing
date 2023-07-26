#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*head,*temp,*newnode,*next;
void main()
{
    create();
    insertmid();


}
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
void insertfront()
{
        printf("insert\n");
        int val;
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&val);
        newnode->data=val;
        newnode->next=head;
        head=newnode;
        display();

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
void insertend()
{
    printf("insert end\n");
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    while(temp->next!=NULL)
    {
        temp=temp->next;
}
temp->next=newnode;
newnode=temp;
display();
}
void insertmid()
{
    int pos,i=0;
    printf("enter pos");
    scanf("%d",&pos);
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=head;
    while(i<pos-1)
    {
        temp=temp->next;
    }

    newnode->next=temp->next->next;
    temp->next=newnode;
    display();

}


