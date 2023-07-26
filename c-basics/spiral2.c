/*

4

444444444
433333334
432222234
432111234
432101234
432111234
432222234
433333334
444444444

*/
//inner decreasing so find n-min
#include<stdio.h>
int min(int a,int b)
{
    if(a<b)
    {
        return a;
    }
    else{
        return b;
    }
}
void main()
{
    int ans, i, n,j;
    scanf("%d",&n);
    int N=2*n;
    for(i=0;i<=N;i++)
    {
        for(j=0;j<=N;j++)
        {
            ans=n-min(min(j,N-j),min(i,N-i)); //left=j  right=N-j  top=i  bottom=N-i
            printf("%d",ans);

        }
    printf("\n");
}
}
