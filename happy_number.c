#include<stdio.h>
int main()
{
    int n,b,i,sum=0;
    scanf("%d",&n);
    i=n;
    while(i>9)
    {
        sum=0;
        for(i;i>0;i=i/10)
        {
            b=i%10;
            sum+=b*b;
        }
        if(sum>9)
        {
            i=sum;
        }
    }
    if(sum==1 ||sum==7)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}