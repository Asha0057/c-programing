#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c,int d)
{


    return 0;
}
int main() {
    int a, b, c, d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
     if((a>b)&(a>c)&(a>d))
    {
        printf("%d",a);
    }
    else if ((b>a)&(b>c)&(b>d))
    {
        printf("%d",b);
    }
    else if((c>a)&(c>b)&(c>d))
    {
        printf("%d",c);
    }

    return 0;
}
