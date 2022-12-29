#include<stdio.h>
int main()
{
    int n,i,s=0,b,q;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        b=q%10;
        s=s*10+b;
        q=q/10;
    }
    if(s==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}