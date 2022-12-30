#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b=a%3;
    if(b==0)
    printf("NORMAL");
    else if(b==1)
    printf("HUGE");
    else
    printf("SMALL");
}