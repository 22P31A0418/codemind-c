#include<stdio.h>
int main()
{
    int a,b,c=0,max,n,i;
    scanf("%d",&n);
    int arr[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    max=arr[a];
    for(i=0;i<n;i++)
    {
        if(arr[i]<a ||arr[i]>b)
        {
            c++;
            printf("%d ",arr[i]);
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}