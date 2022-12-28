#include<stdio.h>
int main()
{
    int a=0,b=1,c,i,min,max,e,fib,f,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(c<n)
        {
            min=c;
        }
        else
        {
            max=c;
            break;
        }
    }
    e=n-min;
    f=max-n;
    //printf("%d %d",min,max);
    if(e==f)
    {
        printf("%d %d",min,max);
    }
    else
    {
        fib=(e<f)?min:max;
        printf("%d",fib);
    }
}