#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    if(n%(a*b)==0)
    printf("%d",n/(a*b));
    else if(n%(a*b)!=0)
    printf("%d",(n/(a*b))+1);
}