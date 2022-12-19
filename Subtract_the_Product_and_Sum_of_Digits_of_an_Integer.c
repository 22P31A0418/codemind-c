#include<stdio.h>
int main()
{
    int a,b,s=0,pro=1,i;
    scanf("%d",&a);
    for(i=a;i>0;i=i/10)
    {
        b=i%10;
        s+=b;
        pro*=b;
    }
    printf("%d",pro-s);
}