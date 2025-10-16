#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int a,b,res;
	if(argc!=7)
	{
		printf("Invalid number of arguments");
		exit (0);
	}
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	res=a+b;
	printf("\n result is-------> %d\n",res);
	printf("no of arguments is ----->%d\n",argc);
	for(int i=0;i<argc;i++)
	{
		printf("\n%d----->>>> %s",i,argv[i]);
	}
	return 0;
	
}
