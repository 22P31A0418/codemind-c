#include<stdio.h>
int main()
{
    int a,b,max;
    scanf("%d%d",&a,&b);
    max=(a>b)?a:b;
    for(max;max>0;max--)
    {
        if(a%max==0 && b%max==0)
        {
            printf("%d",max);
            break;
        }
    }
}