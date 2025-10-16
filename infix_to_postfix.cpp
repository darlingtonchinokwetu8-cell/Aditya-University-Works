//from infix to postfix
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define SIZE 5
int top=-1;
int stack[SIZE];
int precedence(char);
void push(char);
char pop();
char peek();
void infix_to_postfix(char*);
int precedence(char ch)
{
	switch(ch)
	{
		case '+':
		case '-':return 1;
		case '*':
		case '/':
		case '%':return 2;
		case '^':return 3;
		default:return 0;
	}
}
void push(char ch)
{
	stack[++top]=ch;
}
char pop()
{
	return stack[top--];
}
char peek()
{
	return stack[top];
}
void infix_to_postfix(char* ex)
{
	char postfix[SIZE];
	int i,j=0;
	for(i=0;ex[i]!='\0';i++)
	{
	if(isalnum(ex[i])||ex[i]=='+'||ex[i]=='-'||ex[i]=='%'||ex[i]=='/'||ex[i]=='^'||ex[i]=='*'||ex[i]=='('||ex[i]==')')
		{
			if(isalnum(ex[i]))
			{
				postfix[j++]=ex[i];
			}
			else if(ex[i]=='(')
			{
				push(ex[i]);
			}
			else if(ex[i]==')')
			{
				while(top!=-1 && peek()!='(')
				postfix[j++]=pop();
				if(top==-1)
				{
					printf("\n Invalid expression");
				}
					pop();//remove paranthesis
			}
		else
		{
			while(top!=-1 && precedence(peek())>=precedence(ex[i]))
			{
				postfix[j++]=pop();
				
			}
			push(ex[i]);
		}
	   }
	   else
	   {
	   	printf("Invalid Expression\n");
	   	exit(0);
	   }
	}
	while(top!=-1)
	{
		char ch=pop();
		if(ch=='(')
		{
			printf("\n Invalid Expression ");
			exit(0);
		}
		postfix[j++]=ch;
	}
	postfix[j]='\0';
	printf("\u001B[36m \nThe Postfix expression is %s\n",postfix);
}
main()
{
	char infix[SIZE];
	printf("\u001B[32m \nEnter valid infix expression ");
	gets(infix);
	infix_to_postfix(infix);
	return 0;
}
