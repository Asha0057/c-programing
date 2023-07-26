#include<stdio.h>
int main()
{
    int i,n,c,temp,j;
    printf("size: ");
    scanf("%d",&n);
    int a[n+1];
    int last=a[n-1];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
     {
         c=0;
        for(j=i+1;j<n;j++)
    {
        if(a[i]==a[j])
        {
            ++c;
            break;
        }
     }
     if(c==0)
     {
          printf("%d ",a[i]);
     }


    }
}

