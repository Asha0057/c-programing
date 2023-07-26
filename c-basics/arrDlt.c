#include<stdio.h>
int main()
{
    int i,n;
    printf("size: ");
    scanf("%d",&n);
    int a[n+1];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int pos,val;
    printf("enter pos :");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
    }
