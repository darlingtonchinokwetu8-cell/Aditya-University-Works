#include<stdio.h>
#include<stdlib.h>
int count;
typedef struct stack
{
	int data;
	struct stack *next;
}STACK;
STACK *top=NULL;
void display();
void push();
int pop();
int peek();
int isEMPTY();
STACK *create_node();
int isEMPTY()
{
	if(top==NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

STACK *create_node()
{
	int infor;
	STACK *newnode=(STACK*)malloc(sizeof(STACK));
	if(!newnode)
	{
		printf(" Memory allocation failed ");
		return 0;
	}
	else
	{
		printf("\n Enter data into node ");
		scanf("%d",&infor);
		newnode->next=NULL;
		newnode->data=infor;
	}
	return newnode;
}
void push()
{
	STACK *newnode=create_node();
	if(isEMPTY())
	{
		top=newnode;
	}
	else
	{
		newnode->next=top;
		top=newnode;
	}
	count++;
	printf(" Element pushed successifully in Stack");
}
int pop()
{
	int ele;
	if(isEMPTY())
	{
		printf(" \nStack is underflow ");
		return 0;
	}
	else
	{
		STACK *temp=top;
		top=top->next;
		ele=top->data;
		count--;
		free(temp);
		return ele;
	}
	printf("\n Element popped successifully ");
}
int peek( )
{
	if(isEMPTY())
	{
		printf("\nUnderflow ");
		return 0;
	}
	else
	{
		return top->data;
	}
}
void display()
{
	if(isEMPTY())
	{
	printf("\nUnderflow ");
	return;	
	}
	else
	{
		STACK *temp=top;
		printf("\n The Stack elements from top to zero are:\n");
		while(temp!=NULL)
		{
			printf("%d\n",temp->data);
			temp=temp->next;
		}
	}
}
int main()
{
	int choice,x;
	do
	{
		printf("\n*********Menu********\n");
		printf("\n1. Push \n2. Pop \n3.Peek \n4. Display \n5.Exit ");
		printf("\nEnter your choice ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:push();break;
			case 2:x=pop(); if(x!=NULL) printf("Popped element is %d\n",x);break;
			case 3:x=peek(); if(x!=NULL) printf("Topmost element is %d\n",x);break;
			case 4:display();break;
			case 5:exit(0);break;
			default:
				printf("\n INVALID OPTION TRY AGAIN");
		}
	}while(1);
	return 0;
}



