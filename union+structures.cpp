//concept of unions inside structures
#include<stdio.h>
struct student 
{
	union
	{
		char name[20];
		int roll_num;
	};
	int marks[3];
};
int main()
{
	int i,j;
	char choice;
	struct student stud;
	printf(" \nYou can enter name or roll number ");
	printf("\nDou You want to Enter name of the student? (yes or no)");
	scanf("%c",&choice);
	if(choice=='y'|| choice=='Y')
	{
		printf("\nEnter name of the student:");
		scanf("%s",&stud.name);
	}
	else
	{
		printf("\nEnter Roll Number :");
		scanf("%d",&stud.roll_num);
	}
	printf("\nEnter three marks obtained:");
	for(i=0;i<3;i++)
	{
		scanf("%d",&stud.marks[i]);
	}
	printf("***********\n The details are \n************\n");
	if(choice=='y'||choice=='Y')
	{
		printf("Name------>%s\n",stud.name);
		printf("Marks--------->");
		for(i=0;i<3;i++)
		{
			printf("%d ",stud.marks[i]);
		}
	}
	else
	{
		printf("Roll Number------>%d\n",stud.name);
		printf("Marks--------->");
		for(i=0;i<3;i++)
		{
			printf("%d ",stud.marks[i]);
		}
	}
	return 0;
}
