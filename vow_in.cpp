#include<stdio.h>
int main()
{
	char s[100],v; 
	int i,j,flag=0,pos=0;
	printf("Enter String \n");
	scanf("%[^\n]",s);
	getchar();
	printf("Enter a vowel \n");
	scanf("%c",&v);
	for(i=0;s[i]!='\0';i++)
	{
		if(v[j]==s[i])
			{
				flag=1;
				pos=i;
				break;
			}
	}
	if(flag==1)
	{
		printf("%d",pos);
	}
	else
	{
		printf("False");
	}
}
