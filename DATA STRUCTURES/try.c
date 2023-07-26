#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*top,*next,*newnode,*temp;
void main()
{
    int n,i,top=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        newnode->next=top;
        temp=top;
        if(top==0)
            {
                top=newnode;
        }
        else{
                newnode->next=top;
                top=newnode;
        }
        if (top==NULL)
        {
           printf("empty");
        }
        else{
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
}
}

