#include<stdio.h>
#include<conio.h>
int main()
{
	struct student 
	{
		char roll_num[20];
		char name[20];
		char course[20];
		char DOB[20];
		float fees;
	}stud1;
	//clrscr();
	printf("\n Enter student roll number: ");
	scanf("%s",&stud1.roll_num);
	printf("\n Enter Student name: ");
	scanf("%s",&stud1.name);
	printf("\n Enter student course: ");
	scanf("%s",&stud1.course);
	printf("\n Enter date of birth: ");
	scanf("%s",&stud1.DOB);
	printf("\n Enter Student fees: ");
	scanf("%f",&stud1.fees);
	printf("\n*****************************************");
	printf("\nstudent details are as follows ");
	printf("\nRoll Number----------->%s",stud1.roll_num);
	printf("\nName----------->%s",stud1.name);
	printf("\nCourse----------->%s",stud1.course);
	printf("\nDate of Birth----------->%s",stud1.DOB);
	printf("\n Fees----------->%f",stud1.fees);
	getch();
	return 0;
	
}
