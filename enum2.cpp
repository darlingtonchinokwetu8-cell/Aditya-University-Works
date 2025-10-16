//display name of colours using enumerated data types
#include<stdio.h>
#pragma pack(1)
#include<stdlib.h>
#include<conio.h>
enum COLOURS {RED,BLUE,BLACK,GREEN,YELLOW,PURPLE,WHITE};
 int main()
{
	enum COLOURS c;
	c=rand()%7;
	switch(c)
	{
		case RED:printf("red\n");break;
		case BLUE:printf("blue\n");break;
		case BLACK:printf("black\n");break;
		case GREEN:printf("green\n");break;
		case YELLOW:printf("yellow\n");break;
		case PURPLE:printf("purple\n");break;
		case WHITE:printf("white\n");break;
	}
	return 0;
}
