#include<stdio.h>
#include<string.h>
int main()
{
    char ch1[1000],ch2[1000];
    scanf("%s",ch1);
    scanf("%s",ch2);
    int k=0;
    int n=strlen(ch1);
    int l=strlen(ch2);
    int i;
    for(i=n;i<n+l;i++)
    {
        ch1[i]=ch2[k++];
    }
    //ch1[i]=NULL;
    int j;
    char temp;
    //printf("%d
",l+n);
    for(i=0;i<l+n;i++)
    {
        for(j=i+1;j<l+n;j++)
        {
            if(ch1[i]>ch1[j])
            {
                temp=ch1[i];
                ch1[i]=ch1[j];
                ch1[j]=temp;
            }
        }
    }
    for(i=0;i<l+n;i++)
    {
        printf("%c",ch1[i]);
    }
}