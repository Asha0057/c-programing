/*

4
000000000
011111110
012222210
012333210
012343210
012333210
012222210
011111110
000000000

*/
//inner increasing find min

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
            ans=min(min(j,N-j),min(i,N-i)); //left=j  right=N-j  top=i  bottom=N-i
            printf("%d",ans);

        }
    printf("\n");
}
}
