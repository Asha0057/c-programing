#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n;
int i,sum=0;
scanf("%d",&n);
int*arr=(int*)malloc(sizeof(int)*n);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);

}
for(i=0;i<n;i++)
{
    sum+=arr[i];
}
    printf("%d",sum);
    free(arr);
    return 0;
}
