#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],ch[100];
    int i,l=0,temp,flag=0;
    scanf("%[^\n]",s);
    strcpy(ch,s);
    l=strlen(s);
    for(i=0;i<=l/2;i++)
    {
        temp=s[i];
        s[i]=s[l-1-i];
        s[l-1-i]=temp;
    }
    if(s==ch)
    {
        printf(" Not Palindrome\n");
    }
    else
    {
        printf("Palindrome");
    }
}
