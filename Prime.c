#include<stdio.h>
int main()
{
    int n,b,count=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        b=n%i;
        if(b==0)
        count++;
    }
    if(count==2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}