#include<stdio.h>
#include<math.h>
void main()
{

    int n,count=0,i,sum=0,rem,temp;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        n=n/10;
        count++;

    }
    n=temp;
    printf("count = %d \n",count);
    while(n>0)
    {
        rem=n%10;
        sum=sum+pow(rem,count);
        n=n/10;

    }
    if(sum==temp)
    {
        printf("amstrong");
    }
    else{
        printf("not a amstrong");
    }
}
