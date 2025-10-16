#include<stdio.h>
int main()
{
    char s[104];
    int i,sum=0,dig=0;
    printf("Enter string \n");
    scanf("%[^\n]",s);
    getchar();
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
           sum+=s[i]-'0';
        }
    }
    printf("%d",sum);

}
