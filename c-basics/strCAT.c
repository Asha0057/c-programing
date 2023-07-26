#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    int result=0;
    printf("enter a:");
    gets(a);
    printf("enter b:");
    gets(b);
    int n,i=0;
    for(n=0;a[n]!='\0';n++);
    {

        while(b[i]!='\0')
        {
            a[n]=b[i];
            i++;
            n++;
        }
        a[n]='\0';
        printf("%s",a);
        return 0;
    }
}
