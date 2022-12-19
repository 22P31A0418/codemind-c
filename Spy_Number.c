#include<stdio.h>
int main()
{
    int i,b,sum=0,pro=1,n;
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        b=i%10;
        sum+=b;
        pro*=b;
    }
    if(sum==pro)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}