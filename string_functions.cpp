#include <stdio.h>
//Length
int length(char str[])
{
	int lngt =0;
	for(int i =0;str[i] != '\0';i++)
	{
		lngt ++;
	}
	return lngt;
}
//Copy
void copy(char src[],char dest[])
{
	for(int i=0;src[i] != '\0';i++)
	{
		dest[i] = src[i];
	}
}
//Reverse
char* Reverse(char str[])
{
	int n = length(str);
	char temp;
	for(int i =0;i<n/2;i++)
	{
		temp = str[i];
		str[i] = str[n-i-1];
		str[n-i-1] = temp;
	}
	return str;
}
//Concatenate
char* concat(char str1[],char str2[])
{
	int j=0;
	int n1 = length(str1);
	int n2 = length(str2);
	for(int i=n1; str2[j] != '\0';i++)
	{
		for(j=0; j<n2 ;j++)
		{
			str1[i] = str2[j];
		}
	}
	return str1;
}
//Compare
int compare(char str1[],char str2[])
{
	if(length(str1) == length(str2))
	{
		for(int i=0 ;str1[i]!='\0' ;i++)
		{
			if(str1[i] != str2[i])
			{
				//Returning Difference
				if(str1[i] > str2[i])
				{
					return str1[i] - str2[i];
				}
				else
				{
					return str2[i] - str1[i];
				}
			}
		}
	}
	else
	{
		return 	-1;	
	}
}
//Main Program
int main()
{
	//Input Stage
	char name[100],sur[100];
	printf("Enter Name: ");
	gets(name);
	printf("Enter Surname: ");
	gets(sur);
	//Reversing The String
	Reverse(sur);
	printf("Reverse Result is: ");
	puts(sur);
	//Getting Length
	printf("Fullname is: %d",length(name));
	return 3;
}
