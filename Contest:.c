#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    if((a+b*2)<n)
    {
        printf("Not Qualify");
    }
    else
    {
        printf("Qualify");
    }
}