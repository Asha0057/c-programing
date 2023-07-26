#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100],i,result;
    printf("enter a:");
    gets(a);
    printf("enter b:");
    gets(b);
    while(a[i]!='\0'||b[i]!='\0')
    {

    if(a[i]!=b[i])
    {
       result=a[i]-b[i];

       break;
    }
    i++;
    }
    printf("%d",result);
return 0;
}
