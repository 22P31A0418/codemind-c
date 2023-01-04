#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,x,y,i;
    scanf("%d%d%d",&a,&b,&x,&y);
    float s=0;
    for(i=a;i<=b;i++)
    {
        s=s+sqrt(i);
    }
    printf("%.2f",s);
}