/*

3
  ***
 ***
***


*/

#include<stdio.h>
void main()
{
    int i,j,n,k;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        for(k=1;k<=n-i;++k)
        {
            printf(" ");
        }
        for(j=1;j<=n;++j)
        {
             printf("*");
        }
        printf("\n");
    }
}


