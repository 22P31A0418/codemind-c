#include<stdio.h>
#include<math.h>
int main()
{
    int s=0,i,n,c=0;
    scanf("%d",&n);
    int arr[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        s=s+arr[i];
        else if(arr[i]%2==1)
        c=c+arr[i];
    }
    printf("%d",abs(c-s));
}