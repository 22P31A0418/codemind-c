#include<stdio.h>
int main()
{
    int a[100],b,c,n,k=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            k=k+(a[i+1]-a[i]);
        }
    }
    printf("%d",k);
}