#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0,pro=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=(i*i);
        pro+=i;
    }
    printf("%d",abs((pro*pro)-sum));
}