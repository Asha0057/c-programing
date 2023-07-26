#include<stdio.h>
#include<math.h>
void main()
{
   int n,sq,i,count=0,sum,pwr,d,temp,flag=0;
   scanf("%d",&n);
   sq=n*n;
   printf("%d\n",sq);
   temp=sq;
   while(sq>0)
   {
       sq=sq/10;
       count++;
   }
   sq=temp;
   printf("%d\n",count);
   for(i=1;i<=count-1;i++)
   {
       pwr=pow(10,i);
       if(pwr==n) //to avoid 1000,10,10000 tpy values
       {
         continue;
       }
        sum=((sq/pwr )+(sq%pwr));

   if(sum==n)
   {
       flag=1;
       break;
   }
   }
   if(flag==1)
   {
      printf("kaprekar");
   }
   else
   {
       printf("not a kaprekar");
   }

}
