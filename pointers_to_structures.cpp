#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
	int roll_num;
	char name[20];
	char course[20];
	int fees;
};
int main()
{
struct student stud1,stud2,*ptr_stud1,*ptr_stud2;
ptr_stud1=&stud1;
ptr_stud2=&stud2;
ptr_stud1->roll_num=538;
strcpy(ptr_stud1->name,"Dadza");
strcpy(ptr_stud1->course,"Btech");
ptr_stud1->fees=50000;

printf("********************************\n");
printf("Details of the second student \n");
printf("---------------------------------\n");
printf("Enter the roll number \n");
scanf("%d",ptr_stud2->roll_num);
fflush(stdin);
printf("Enter Name\n");
scanf("%s",ptr_stud2->name);
fflush(stdin);
printf("Enter course\n");
scanf("%s",ptr_stud2->course);
fflush(stdin);
printf("Enter fees\n");
scanf("%d",ptr_stud2->fees);
fflush(stdin);

printf("Details of first student\n-----------------------------------------------\n");
printf("Roll Number ------>%d",ptr_stud1->roll_num);
printf("Name-------->%s",ptr_stud1->name);
printf("Course-------->%s\n",ptr_stud1->course);
printf("Fees-------->%d\n-------------------------\n",ptr_stud1->fees);

printf("\t\tDetails of second student\n-----------------------------------------------\n");
printf("Roll Number ------>%d",ptr_stud2->roll_num);
printf("Name-------->%s",ptr_stud2->name);
printf("Course-------->%s\n",ptr_stud2->course);
printf("Fees-------->%d\n",ptr_stud2->fees);
printf("*****************************************************");
return 0;
}


