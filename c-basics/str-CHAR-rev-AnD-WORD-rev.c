#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,n,k;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            a[i]='\0';
            for(k=i-1;a[k]!='\0';k--)
            {
                printf("%c",a[k]);
            }
            printf(" ");
        }
}
for(k=i-1;a[k]!='\0';k--)
{
    printf("%c",a[k]);
}
return 0;
}
