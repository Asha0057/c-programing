#include<stdio.h>
int main()
{
    char ch;
    char s[10];
    char sen[30];
    scanf("%c",&ch);
    scanf("%s",&s);
    scanf("\n%[^\n]%*c",&sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen);
    return 0;
}
