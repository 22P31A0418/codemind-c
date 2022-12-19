#include<stdio.h>
int main()
{
    int n,i,e=0,o=0,b;
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        b=i%10;
        if(b%2==0)
        e++;
        else if(b%2==1)
        o++;
    }
    if(e!=0 && o!=0)
    printf("Mixed");
    else if(e!=0 && o==0)
    printf("Even");
    else
    printf("Odd");
}