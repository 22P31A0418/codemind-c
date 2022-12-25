#include<stdio.h>
int main()
{
    int a,b,s=0,r;
    scanf("%d",&a);
    b=a;
    while(b!=0)
    {
        r=b%10;
        s=s*10+r;
        b=b/10;
    }
    printf("%d",s);
}