#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define SIZE 5
void push(int);
int pop();
int evaluation_postfix_exp(char*);
int STACK[SIZE],top=-1;
void push(int n)
{
	STACK[++top]=n;
}
int pop()
{
	return STACK[top--];
}
int evaluation_postfix_exp(char* exp)
{
	int dig=0,op=0,i;
	for(i=0;exp[i]!='\0';i++)
	{
		if(isdigit(exp[i]))
		{
			dig++;
		}
		else if(exp[i]=='+'||exp[i]=='-'||exp[i]=='/'||exp[i]=='%'||exp[i]=='^')
		{
			op++;
		}
	}
	if(dig<op)
	{
		printf("\nThe postfix expression is invalid");
		exit(0);
	}
	for(i=0;exp[i]!='\0';i++)
	{
		if(exp[i]=='+'||exp[i]=='-'||exp[i]=='/'||exp[i]=='%'||exp[i]=='^'||isdigit(exp[i])||exp[i]=='*')
		{
			if(isdigit(exp[i]))
			{
				push(exp[i]-'0');
			}
			else
			{
				int x1=pop();
				int x2=pop();
				switch(exp[i])
				{
					case '+':push(x2+x1);break;
				    case '-':push(x2-x1);break;
				    case '/':push(x2/x1);break;
				    case '%':push(x2%x1);break;
				    case '^':push(x2^x1);break;
				    case '*':push(x2*x1);break;
				}
			}
		}
		else
		{
			printf("\n Invalid Expression");
			exit(0);
		}
	}
	if(top!=0)
	{
		printf("\n The Expression is invalid");
		exit(0);
	}
	else
	{
		return STACK[top];
	}
}
int main()
{
	char postfix[SIZE];
	printf("\nEnter valid postfix expression ");
	gets(postfix);
   printf("\nResult of postfix evaluation is %d ",evaluation_postfix_exp(postfix));
	
}

