#include<stdio.h>
int main()
{
int n,sq,sq2,rem,rev=0,rem1,rev1=0;
printf("enter n:");
scanf("%d",&n);
sq=n*n;
printf("%d \n ",sq);
while(n>0)
{

rem=n%10;
rev=rev*10+rem;
n=n/10;

}

printf("%d \n",rev);
sq2=rev*rev;
printf("%d \n",sq2);

while(sq>0)
{
    rem1=sq%10;
    rev1=rev1*10+rem1;
    sq=sq/10;
}
printf("REVERSE1 =%d \n",rev1);
if(rev1==sq2)
{
    printf("Adam number %d = %d",rev1,sq2);
}
else{
    printf("not a Adam Number");
}


}

