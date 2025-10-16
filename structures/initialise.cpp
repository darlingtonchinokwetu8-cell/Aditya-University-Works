#include<stdio.h>
int main()
{
	struct student
	{
		char roll_num[20];
		char name[50];
		char course[50];
		int fees;
	}stud1;
	printf("enter inormation for student 1");
	scanf("%s",&stud1.roll_num);
	scanf("%s",&stud1.name);
	scanf("%s",&stud1.course);
	scanf("%d",&stud1.fees);
	printf(" name is %s",stud1.name);

	return 0;
}
