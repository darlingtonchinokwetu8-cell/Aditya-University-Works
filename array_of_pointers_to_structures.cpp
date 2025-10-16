#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	char roll_num[15];
	char name[20];
	char course[20];
	int fees;
}student;

int main()
{
	int i,n;
	printf("\n Enter number of students ");
	scanf("%d",&n);
	student *ptr[n];
	for(i=0;i<n;i++)
	{
		ptr[i]=(struct student*)malloc(sizeof(student));
		printf("Enter the details of student %d\n**************\n ",i+1);
		printf("ROLLNUMBER:\n");
		scanf("%s",ptr[i]->roll_num);
		printf("NAME:\n");
		scanf("%s",ptr[i]->name);
		printf("Course:\n");
		scanf("%s",ptr[i]->course);
		printf("FEES:\n");
		scanf("%d",&ptr[i]->fees);
	}
	printf("\t\tTHE DETAILS OF STUDENT %d are\n*****************\n",i+1);
	for(i=0;i<n;i++)
	{
		printf("ROLLNUMBER------->%s\n",ptr[i]->roll_num);
		printf("NAME OF STUDENT------->%s\n",ptr[i]->name);
		printf("COURSE OF STUDENT------->%s\n",ptr[i]->course);
		printf("FEES BALANCE------->%d\n",ptr[i]->fees);
	}
	free(ptr);
	fflush(stdin);
	return 0;
}

