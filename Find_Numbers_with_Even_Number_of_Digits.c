#include<stdio.h>
#include<math.h>
int main()
{
    int n,nu,c=0,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        nu=log10(arr[i])+1;
        if(nu%2==0)
        c++;
    }
    printf("%d",c);
}