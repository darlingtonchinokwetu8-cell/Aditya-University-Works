//implementing stacks using arrays;
#include<stdio.h>
#include<stdlib.h>
#define size 5
//global variables
int stack[size];
int top=-1;
int sum=0;
//function prototypes
void push(int);
int pop();
int peek();
void display();
int isEmpty();
int isFull();

int isEmpty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
	return 0;
    }
}

int isFull()
{
	if(top==size-1)
	{
		return 1;
	}
	else
	{
	return 0;	
	}
}

void push()
{
	int ele;
	if(isFull())
	{
		printf("\u001B[35m \n Overflow ");
	}
	else
	{
		 printf("\u001B[31m Enter data into stack \n");
		 scanf("%d",&ele);
		stack[++top]=ele;
		printf("\u001B[36m Element Pushed successifully ");
	}

}//End

void display()
{
	if(isEmpty())
	{
		printf("\n Underflow ");
	}
	else
	{
		printf("\u001B[32m \n The stack elements \u001B[3m(TOP to ZERO)\u001B[32m are:\n ");
		for(int i=top;i>=0;i--)
		{
			printf(" %d\n",stack[i]);
			
		}
	}
}

int pop()
{
	int x;
	if(isEmpty())
	{
		printf("\u001B[33m  Underflow");
		return -1;
	}
	else
	{
		return stack[top--];
		//top--;
	}
}//end

int peek()
{
	if(isEmpty())
	{
		printf("\u001B[33m Underflow");
		return -1;
	}
	else
	{
		return stack[top];
	}
}//end
int total()
{
	while(stack[top]!=isEmpty())
	{
		sum++;
	}
	return sum;
}
int main()
{
	int choice,x;
	do
	{
		printf("\n*********Menu********\n");
		printf("\u001B[35m \n1. Push \n2. Pop \n3.Peek \n4. Display \n5.Exit \n6. sum ");
		printf("\nEnter your choice ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:push();break;
			case 2:x=pop(); if(x!=-1) printf("\u001B[33m Popped element is %d\n",x);break;
			case 3:x=peek(); if(x!=-1) printf("\u001B[36m Topmost element is %d\n",x);break;
			case 4:display();break;
			case 5:exit(0);break;
			case 6:printf("Sum is %d ",total());break;
			default:
				printf("\n INVALID OPTION TRY AGAIN");
		}
	}while(1);
	return 0;
}
