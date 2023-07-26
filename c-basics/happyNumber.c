#include<stdio.h>
#include<math.h>
int sep(int temp)
{
    if(temp==0)
    {
        return 4;
    }
    int rem,sum=0;
    while(temp>0)
    {
      rem=temp%10;
        sum+=rem*rem;
        temp=temp/10;
    }
    return sum;
}
void main()
{
    int n,i=0,rem,sum=0,ans,temp;
    scanf("%d",&n);
    temp=n;
    while(1)
    {
       ans= sep(temp);
       if(ans==1)
       {
           printf("happy number");
           break;
       }
       if(ans==4)
       {
           printf("not happpy");
           break;
       }
       temp=ans;
    }
}
