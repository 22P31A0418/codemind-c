#include<stdio.h>
int main()
{
    int a,b,i,j,count=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%2==0)
        printf("%d ",i);
    }
}