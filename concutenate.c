#include<stdio.h>
int main()
{
	char a[100],b[100];
	int l,i;
	//request for strings from user
	printf("enter two strings ");
	scanf("%[^\n]%[^\n]",&a,&b);
	//find lenth of string a
	for(i=0;a[i]!='\0';i++)
	{
		l++;
	}
	//logic for concutenating strings
	for(i=l;b[i-l]!='\0';i++)
	{
		b[i-l]=a[i];
	}
	puts(b);
	return 0;
}
