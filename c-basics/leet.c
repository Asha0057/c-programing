#include<stdio.h>
int  main()
{
    int n,i,a[100],j,swap;
    printf("nums");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(a[j]>a[i])
            {
                swap=a[j];
                a[j]=a[i];
                a[i]=swap;

            }
        }

    }
    printf("%d",i);
return 0;
}
