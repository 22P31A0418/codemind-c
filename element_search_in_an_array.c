#include<stdio.h>
int main()
{
    int n,arr[100],i,a,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(a==arr[i])
        {
            s=1;
            break;
        }
    }
    if(s==1)
    printf("True");
    else
    printf("False");
}