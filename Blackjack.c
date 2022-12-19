#include<stdio.h>
int main()
{
    int a,b,i,s;
    scanf("%d%d",&a,&b);
    for(i=1;i<=10;i++)
    {
        if(a+b+i==21)
        {
            s=0;
            break;
        }
        else
        s=1;
    }
    if(s==0)
    printf("%d",i);
    else
    printf("-1");
}