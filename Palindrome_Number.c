#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,s=0,r,b;
        scanf("%d",&a);
        b=a;
        while(b!=0)
        {
            r=b%10;
            s=s*10+r;
            b=b/10;
        }
        if(s==a)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}