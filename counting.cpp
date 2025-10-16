#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch;
	int dig=0,vow=0,cons=0,spl=0,spc=0;
	FILE*fp;
	fp=fopen("week11.txt","r");
	if(fp==NULL)
	{
		printf("File not exist");
		exit(0);
	}
	
	while(!feof(fp))
	{
		ch=fgetc(fp);
		if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
		{
			switch(ch)
			{
				case'a':case'A':
				case'e':case'E':
				case'i':case'I':
				case'o':case'O':
				case'u':case'U':
				vow++;
				default:
				cons++;	
			}
		}
		else if((ch>='0'&&ch<='9'))
		{
			dig++;
		}
		else if(ch==' ')
		{
			spc++;
		}
		else
		{
			spl++;
		}
	}
	printf("vowels------>%d",vow);
	printf("\ndigits------>%d",dig);
	printf("\nconsonents---->%d",cons);
	printf("\nSpaces------>%d",spc);
	printf("\nspecial characters------>%d",spl);
	fclose(fp);
	return 0;
	
}
