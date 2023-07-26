#include<stdio.h>
int main()
{
int f=1,n,i,rem,sum=0,temp;
scanf("%d",&n);
temp=n;
if(n==0)
{
    printf("Not a strong number");
    return 0;  //breaks the function
}
while(n>0)
{
    rem=n%10;
    f=1;
    for(i=rem;i>=2;i--)
    {
        f=f*i;
    }
    sum=sum+f;
    n=n/10;
}
printf("%d",sum);
if(sum==temp)
{
    printf("\n strong number");

}
else{
    printf("\n not a strong number");
}
return 0;
}
