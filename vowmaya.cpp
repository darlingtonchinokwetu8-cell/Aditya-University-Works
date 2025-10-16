#include<stdio.h>
int main()
{
    char s[100];
    int i,v=0;
    scanf("%[^\n]",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z')
        {
        	char ch=s[i];
            switch(ch)
            {
                case 'A':case 'a':
                case 'E' :case 'e':
                case 'I' :case 'i':
                case 'O' : case 'o':
                case 'U' : case 'u':
                v++;
                //default: 
            }
        }
    }
    printf("%d",v);
}
