#include<stdio.h>
int main()
{
    int arr[100],i;
    float sum=0,n;
    scanf("%f",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%.2f",sum/n);
}