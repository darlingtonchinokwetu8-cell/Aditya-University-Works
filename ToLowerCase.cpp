#include<stdio.h>
#include<ctype.h>
void ToLowerCase(char*);
void ToLowerCase(char str[])
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
        str[i]+=32;
		}
    }
}
int main()
{
    char str[100];
    int i;
    scanf("%[^\n]",&str);
       ToLowerCase(str);
        printf("%s",str);
    
}
