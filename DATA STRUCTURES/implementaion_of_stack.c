#include<stdio.h>
#include<stdlib.h>
int stack[5];
int top=-1;
int i,element;
int size=5;
void main()
{
    int choice;
    while(1)
    {
        printf("enter choice");
        switch(choice)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:peek();
            break;
            case 4:display();
            break;
            default :
                printf("no choice");
                break;
                return 0;
        }

        }
}
        void push()
        {
            if (top==size-1)
            {
                printf("overflow");
            }
            else{
                printf("enter element");
                scanf("%d",&element);
                top++;
                stack[top]=element;
            }
            printf("%d",element);
        }
        void pop()
        {
            if(top==-1)
            {
                printf("overflow");
            }
            else{
                element=stack[top];
                top--;
                printf("%d",element);
            }
        }
        void peek()
        {
            printf("%d\n",stack[top]);
        }
        void display()
        {
            printf("the elements are:");
            for(i=top;i>=0;i--)
            {
                printf("%d\n",stack[i]);
            }
        }




