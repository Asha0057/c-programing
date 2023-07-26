#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack[N];
int top=-1,i;
void push(int x)
{
    if(top==N-1)
    {
        printf("overflow");
    }
    else{
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top==-1)
    {

        printf("underflow");
    }
    else{
            stack[top]=0;
            top--;
    }
}
void peek()
{

    if(top==-1)
    {
        printf("cant find peek");
    }
    else{
        printf("%d ",stack[top]);
    }
}
void display()
{

    if(top==-1)
    {
        printf("cant display");
    }
    else{
        for(i=0;i<=top;i++)
        {
            printf("%d ",stack[i]);
        }
    }
}
int main()
{
  push(10);
  push(20);
  push(30);
  push(40);
  pop();
  peek();
  display();
  return 0;
}

