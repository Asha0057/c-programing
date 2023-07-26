#include<stdio.h>
void main()
{
    int i,j,n,k,temp;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        temp=i;
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
            {
                printf("%d",temp);
                --temp;
            }
            printf("\n");
        }
        for(i=1;i<=n;++i)
    {
        for(j=1;j<i;j++)
            {
                printf("%d",j);

            }
            printf("\n");
        }
    }

