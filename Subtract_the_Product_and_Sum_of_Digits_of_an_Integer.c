#include<stdio.h>
int main()
{
    int n,pro=1,sum=0,b,i;
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        b=i%10;
        sum+=b;
        pro*=b;
    }
    printf("%d",pro-sum);
}