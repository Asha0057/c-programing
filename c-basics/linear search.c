#include<stdio.h>
int main()
{
    int n,i,a[100],t;
    printf("size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }
    printf("target:");
    scanf("%d",&t);
    int res = linearSearch(a,n,t);
    printf("%d",res);
}
int linearSearch(int a[],int n,int t)
{

int i;

    for(i=0;i<=n;i++)
    {
        if(a[i]==t)
        {
           return i;
        }
    }
    return -1;
}
