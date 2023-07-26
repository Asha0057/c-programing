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
    int n=0,i=0,rem,range,sum=0,ans,temp;
    printf("enter range:");
scanf("%d",&range);
for(i=0;i<=range;i++)
{
    temp=n;
    while(1)
    {
       ans= sep(temp);
       if(ans==1)
       {
           printf(" %d happy number \n",n);
           break;
       }
       if(ans==4)
       {
           printf(" %d is not happpy \n",n);
           break;
       }
       temp=ans;
    }
    n++;
}
}
