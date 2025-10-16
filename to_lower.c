#include<stdio.h>
int main()
{
	char s1[100];
	int i;
	printf("enter string");
	scanf("%[^\n]",&s1[i]);
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>='A'&&s1[i]<='Z')
		s1[i]+=32;
	}
	printf("lower cased string is %s",s1);
	return 0;
	
	
}
