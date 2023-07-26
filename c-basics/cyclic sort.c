#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    cyclicsort(a,n);
}
void swap(int a[],int frst, int sec)
{
    int temp=a[frst];
    a[frst]=a[sec];
    a[sec]=temp;

}
void cyclicsort(int a[],int n)
{
    int i=0,correct;
    while(i<n)
    {
        correct=a[i]-1;
        if(a[i]!=a[correct])
        {
            swap(a,i,correct);

        }
        else
        {
            i++;
        }

    }
    for(i=0;i<n;i++)
        {
            printf("%d",a[i]);
        }


}
