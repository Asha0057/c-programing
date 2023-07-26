
#include<stdio.h>
int main()
{
    int n,i,a[100],target;
    printf("size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }
    printf("target:");
    scanf("%d",&target);
   int res= binarySearch(a,n,target);
   printf("%d",res);
}
int binarySearch(int a[]/* or (int a* )*/,int n, int target)
{
    int i,start=0,end=n-1,mid;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(target>a[mid])
        {
            start=mid+1;
        }
        else if(target<a[mid])
        {
            end=mid-1;
        }
        else{
            return mid;
        }
    }
    return a[start]; //can also be mid but may be not for all cases

}
