#include<stdio.h>
int main()
{
    int n,arr[100],i,sum=0,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    //printf("%d",sum/n);
    for(i=0;i<n;i++)
    {
        //printf("%d",s);
        if(sum/n==arr[i])
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