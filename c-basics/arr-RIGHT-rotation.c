#include<stdio.h>
int main()
{
    int i,n,r,temp,j;
    printf("size: ");
    scanf("%d",&n);
    int a[n+1];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("rotation number:");
    {
        scanf("%d",&r);
    }
    for(i=1;i<=r;i++)
    {
        temp=a[n-1];
        for(j=n-1;j>0;j--)
        {
          a[j+1]=a[j];
        }

        a[0]=temp;

    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
 }
 return 0;
}

