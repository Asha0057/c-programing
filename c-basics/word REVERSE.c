#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,n,k;
    gets(a);
    for(n=0;a[n]!='\0';n++);
    for(i=n-1;i>=0;i--)
    {
        if(a[i]==' ')
        {
            a[i]='\0';
            for(k=i+1;a[k]!='\0';k++)
            {
                printf("%c",a[k]);
            }
            printf(" ");
        }
}
printf("%s",a);
return 0;
}
