#include<stdio.h>
int main()
{
	char s1[100];
	int i;
	printf("enter string");
	scanf("%[^\n]",&s1[i]);
		if(s1[i]>='a'&&s1[i]<='z')
		s1[0]-=32;
	printf(" sentential string is %s",s1);
	return 0;
	
	
}
