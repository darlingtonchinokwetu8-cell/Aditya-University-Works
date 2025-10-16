#include<stdio.h>
int main()
{
	char s[100];
	int i,w=0,sum=0;
	printf("Enter String \n");
	scanf("%[^\n]",s);
	for(i=0;s[i]!='\0';i++)
	{
		char ch=s[i];
		{
			if(ch==' ')
			sum++;
		}
	}
	printf("%d",sum+1);
}
