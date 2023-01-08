#include<stdio.h>
#include<math.h>
int main()
{
    int n,i=0,r=0,sqrt,q;
    scanf("%d",&n);
    q=n;
    sqrt=n*n;
    while(n)
    {
        r+=((sqrt%10)*pow(10,i));
        sqrt/=10;
        n/=10;
        i++;
    }
    if(q==r)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}