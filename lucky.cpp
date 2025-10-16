#include<stdio.h>
int main()
{
    char s[10];
    int i,pos=0;
    scanf("%[^\n]",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a'&& s[i]<='z')
        {
            pos=1;
            break;
        }
    }
    if(pos)
    {
        printf("%c",s[i+5]);
    }
    else
    return 0;

}
