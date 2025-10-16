#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch1,ch2;
	FILE *fp1,*fp2,*fp3;
	fp1=fopen("week11.txt","r");
	if(fp1==NULL)
	{
		printf("Not Existed");
		exit(0);
	}
	fp2=fopen("counting.cpp","r");
	if(fp2==NULL)
	{
		printf("NOt Existed");
		exit(0);
	}
	fp3=fopen("week11edited.txt","w");
	if(fp3==NULL)
	{
		printf("Not Existed");
	}
	while(!feof(fp1))
	{
		ch1=fgetc(fp1);
		fputc(ch1,fp3);
	}
	while(!feof(fp2))
	{
		ch2=fgetc(fp2);
		fputc(ch2,fp3);
	}
	printf("Done");
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	
	
}
