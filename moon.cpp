#include<stdio.h>
int main()
{
	int N;
	char s[N];
	int i,go=0,no=0;
	printf("Enter number of votes :\n");
	scanf("%d",&N);
	printf("Enter  the votes ");
	scanf("%[^\n]",s);
	for(i=0;i<N;i++)
	{
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]>='0'&&s[i]<='1')
			{
			if(s[i]=='0')
		{
			no++;
		}
		if(s[i]=='1')
		{
			go++;
		}
		}
		}
		
	}
	if(go>no)
	{
		printf("he go\n");
	}
	else
	{
		printf("Kiddo");
	}
	
	
}
