#include<stdio.h>
#include<string.h>
int main()
{

    char a[100],temp;
    int i,j,num=0,k;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        num=0;
        if(a[i]>='0'&&a[i]<='9')
        {
            temp=a[i-1];
            while(a[i]>='0'&&a[i]<='9')
            {
                num=num*10+(a[i]-48);
                i++;
            }
            for(k=1;k<=num;k++)
            {
                printf("%c",temp);
            }
        }

    }
}
