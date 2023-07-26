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
    printf("enter element to insert:");
    scanf("%d",&val);
    for(i=n-1;i>=pos;i--)
    {
      a[i+1]=a[i];
    }

    a[pos]=val;
    for(i=0;i<=n;i++)
        {
            printf("%d ",a[i]);
    }
    return 0;
    }
