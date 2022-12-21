#include<stdio.h>
int main()
{
    int n,i,b=1,a,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        b=1;
        for(j=a;j>0;j--)
        {
            b*=j;
        }
        printf("%d
",b);
    }
}