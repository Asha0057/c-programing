/*
5
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

*/

#include<stdio.h>
void main()
{
    int i,j,n,k;
    scanf("%d",&n);
    for(i=1;i<n;++i) //combine both prgrm and change i<n instead of i<=n
    {
        for(k=1;k<=n-i;++k)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;++j)
        {
             printf("*");
        }
        printf("\n");
    }
     for(i=n;i>=1;--i)
    {
        for(k=1;k<=n-i;++k)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;++j)
        {
             printf("*");
        }
        printf("\n");
    }
}

