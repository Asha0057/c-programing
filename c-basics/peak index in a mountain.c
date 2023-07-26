#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }
    int res=peak(a,n);
    printf("%d",res);
    return 0;
}
int peak(int a[],int n)
{
    int s=0,e=n-1,mid;
    while(s<e)
    {
        mid=(s+e)/2;
        if(a[mid]>a[mid+1])
        {
            e=mid;
        }
        else{
            s=mid+1;

        }
    }
    return s;// or e
}
