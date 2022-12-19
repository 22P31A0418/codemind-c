#include<stdio.h>
int main()
{
    int arr[100],i,n,s,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        //printf("%d",&arr[i]);
        if(arr[i]>max)
        max=arr[i];
    }
    //printf("%d",max);
    for(max;max>0;max++)
    {
        for(i=0;i<n;i++)
        {
            //printf("
%d
",max,%arr[i]);
            if(max%arr[i]!=0)
            {
                
                s=0;
                break;
            }
            else
            s=1;
        }
        if(s==1)
        {
            printf("%d",max);
            break;
        }
    }
}