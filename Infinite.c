#include<stdio.h>
int main()
{
    int a,i;
    while(a!=-1)
    {
        scanf("%d",&a);
        if(a!=-1)
        {
           printf("%d
",a*a);
        }
        else
        {
            break;
        }
    }
}