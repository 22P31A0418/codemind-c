#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c=='A' ||c=='E' ||c=='I' ||c=='O' ||c=='U')
    {
        printf("Vowel");
    }
    else if(c=='a' ||c=='e' ||c=='i' ||c=='o' ||c=='u')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
}