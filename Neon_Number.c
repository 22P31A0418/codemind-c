#include<stdio.h>
int main()
{
    int n,i,sum=0,b;
    scanf("%d",&n);
    for(i=n*n;i>0;i=i/10)
    {
        b=i%10;
        sum+=b;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}