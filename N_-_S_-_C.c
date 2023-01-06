#include<stdio.h>
int main()
{
    int a,c=0,b,s,j;
    scanf("%d%d",&a,&b);
    for(j=a+1;j<b;j++)
    {
        s=0;
        c=0;
        s=j*j;
        c=j*j*j;
        printf("%d %d %d
",j,s,c);
    }
}