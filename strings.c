#include <stdio.h>

void capitalize(char str[])
{
	int i=0;
	for(i=0;str[i] != '\0';i++)
	{
		if(str[i] >=65 && str[i] <=90)
		{
			continue;
		}
		else if(str[i] >=97 && str[i] <=122)
		{
			str[i] = str[i] -32;
		}
	}
}

int main()
{
	//Strings
	char str[100];
	puts("Enter String");
	gets(str);
	//Capitalize String	
	capitalize(str);
	puts(str);
	return 0;
}

