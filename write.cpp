#include<stdio.h>
#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("khule.txt","w");
	if(fp==NULL)
	{
		printf("file not existed");
		
	}
	fwrite;
	printf("Done");
	fclose(fp);
	return 0;
}
