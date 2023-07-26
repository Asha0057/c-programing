#include<stdio.h>
void main()
{
    int i,j,n,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
     for(i=n;i>=1;i--)
    {
        for(j=1;j<i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    //reverse

    for(i=0;i<=n;i++)
    {
        for(k=0;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
     for(i=n;i>=1;i--)
    {

        for(k=0;k<=n-i;k++)
        {
            printf(" ");
        }

        for(j=1;j<=i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    }


