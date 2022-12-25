#include<stdio.h>
int main()
{
    int a,b,c,i,pr;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        b=i*i;
        if(b==a)
        {
            pr=1;
            break;
        }
    }
    if(pr==1)
    printf("True");
    else
    printf("False");
}