#include<stdio.h>
void main()
{
    int stack[5];
    int top=-1,i;
    int element;
    int size;
    printf("enter size");
    scanf("%d",&size);
    for(i=0;i<size;i++)
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
     printf("%d\n",element);
}
