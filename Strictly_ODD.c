#include<stdio.h>
int main()
{
    int n,arr[100],a=0,b=0,c=0,d=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            a++;
            if(i%2!=0)
            b++;
        }
    }
    if(a==b)
    printf("True");
    else
    printf("False");
}