#include<stdio.h>
int main()
{
    int n,i,max=0,b;
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        b=i%10;
        if(b>max)
        max=b;
    }
    printf("%d",max);
}