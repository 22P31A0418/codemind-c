#include<stdio.h>
int main()
{
    int n,arr[100],i,j,c=0,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] &&i!=j)
            c++;
        }
        if(c==0)
        {
            s=1;
            printf("%d ",arr[i]);
        }
    }
    if(s==0)
    printf("-1");
}