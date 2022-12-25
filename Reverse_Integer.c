#include<stdio.h>
int main()
{
    int r,b,a,i,s=0;
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