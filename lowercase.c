#include <stdio.h>

void lowercase(char str[])
{
	int i=0;
	for(i=0;str[i] != '\0';i++)
	{
	 if(str[i] >=97 && str[i] <=122)
		{
			continue;
		}
		else if(str[i] >=65 && str[i] <=90)
		{
			str[i]=str[i]+32;
		}
	}
}

int main()
{
	//Strings
	char str[100];
	puts("Enter String");
	gets(str);
	//lowercase String	
	lowercase(str);
	printf("the lower cased string is %s",str);
	return 0;
}
