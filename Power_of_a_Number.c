#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,c;
    scanf("%d%d%d",&n,&a,&b);
    c=pow(n,a);
    printf("%d",c%b);
}