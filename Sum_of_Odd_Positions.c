#include<stdio.h>
int main()
{
    int n,sum=0,i,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        //printf("%d",arr[i]);
        if(i%2!=0)
        sum=sum+arr[i];
    }
    printf("%d",sum);
}