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
int n,sq,sq2,rem,rev=0,rem1,rev1=0;
printf("enter n:");
scanf("%d",&n);
sq=square(n); //square function
printf("%d \n ",sq);
rev=reverse(n); //reverse function
printf("%d \n",rev);
sq2=square(rev);
printf("%d \n",sq2);
rev1=reverse(sq);
printf("REVERSE1 =%d \n",rev1);
if(rev1==sq2)
{
    printf("Adam number %d = %d",rev1,sq2);
}
else{
    printf("not a Adam Number");
}
return 0;

}


