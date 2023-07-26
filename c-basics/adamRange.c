#include<stdio.h>
int square(int n)
{

    return n*n;
}
int reverse(int n)
{

int rem,rev=0;
while(n>0)
    {
        rem=n%10;
rev=rev*10+rem;
n=n/10;

    }
   return rev;
}

int main()
{
int i,sq,sq2,rem,rev=0,rem1,rev1=0,range,temp,n=0;
printf("enter range:");
scanf("%d",&range);
for(i=0;i<=range;i++)
{

for(i=0;i<=n;i++)
{
// printf("n = %d \n",n);
sq=square(n); //square function
//printf("square = %d \n",sq);

rev=reverse(n); //reverse function
//printf("reverse = %d \n",rev);

sq2=square(rev);
//printf("sq2 = %d \n",sq2);

rev1=reverse(sq);
//printf("REVERSE1 = %d \n",rev1);

if(rev1==sq2)
{
    printf("%d is Adam number %d = %d",n,rev1,sq2);
    break;
}
else{
    printf("%d is NOt a Adam Number %d != %d",n,rev1,sq2);
    break;
}
}

printf("\n");
printf("\n");
    n++;
    if(n==range+1)
    {
        break;
    }
}

return 0;
}






