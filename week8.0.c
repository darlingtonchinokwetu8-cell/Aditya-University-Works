#include<stdio.h>
int main()
{
	char s1[100];
	int i,alpha=0,lower=0,dig=0,upper=0,spl=0,space=0,vowel=0,cons=0;
	printf("enter a string");
	scanf("%[^\n]",&s1[i]);
	for(i=0;s1[i]!='\0';i++)
	{
		if((s1[i]>='A')&&(s1[i]<='Z')||(s1[i]>='a')&&s1[i]<='z')
		{
			alpha++;
			if((s1[i]>='A')&&(s1[i]<='Z'))
			{
				upper++;
				if((s1[i]>='a')&&s1[i]<='z')
				{
					lower++;
				}
			}
			switch(s1[i])
			{
				case'A':case'a':
				case'E':case'e':
				case'I':case'i':
				case'O':case'o':
				case'U':case'u':
				vowel++;
				default:
				cons++;
			}	
		}
		else if((s1[i]>='0')&&(s1[i]<='9'))
		dig++;
		else if(s1[i]==' ')
		space++;
		else
		spl++;
	}
		printf("number of alphabets is %d\n",alpha);
	printf("number of upper case is %d\n",upper);
	printf("number of lower case is %d\n",lower);
	printf("number of vowels is %d\n",vowel);
	printf("number of special characters  is %d\n",spl);
	printf("number of consonents is %d\n",cons);
	return 0;
}
