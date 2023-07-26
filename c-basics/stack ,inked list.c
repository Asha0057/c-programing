#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node*newnode,*top=0;

void push(int x)
{
    newnode=(struct node*)malloc (sizeof(struct node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;
}
void pop()
{
    struct node *temp=top;
    if(top==0)
    {
        printf("underflow");
    }
    else{
        top=top->next;
        free(temp);
    }
}
void peek()
{
    if(top==0)
    {
        printf("cant find peek");
    }
    else{
        printf("%d ",top->data);
    }
}
void display()
{
  if(top==0)
  {
      printf("cant display");
  }
  else{
        struct node *temp=top;
    while(temp!=0)
    {
        printf("%d ",temp->data);
  temp=temp->next;
    }
  }
}
int main()
{
    push(30);
    push(20);
    push(10);
    push(50);
    pop();
    pop();
    display();
}
