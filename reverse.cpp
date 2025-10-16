#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char s[100];
    int i,l=0,temp;
    scanf("%[^\n]",s);
    l=strlen(s);
    for(i=0;i<l/2;i++)
    {
       temp=s[i];
       s[i]=s[l-1-i];
       s[l-1-i]=temp;
    }
    printf("%s",s);
}
