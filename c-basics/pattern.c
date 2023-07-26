#include<stdio.h>
int main()
{
int i,j,n,k,temp;
scanf("%d",&n);
for(i=i;i<=n;i++)
{
    temp=i;
    for(k=1;k<=n-i;k++)
    {

        printf(" ");
    }
    for(j=1;j<i;++j)
    {
        printf("%d",temp);
        --temp;
    }
    for(j=1;j<=i;++j)
    {
        printf("%d",j);
    }
    printf("\n");
}
    for(i=n;i>=1;i--)
{
    temp=i;
    for(k=1;k<=n-i;k++)
    {

        printf(" ");
    }
    for(j=1;j<2*i-1;j++)
    {
        printf("%d",temp);
        --temp;
    }
    for(j=1;j<=i;++j)
    {
        printf("%d",j);
    }
    printf("\n");

}

}


