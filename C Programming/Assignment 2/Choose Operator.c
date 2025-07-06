//1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;//res;
	char op;
	printf("Enter the First Number :");
	scanf("%d",&a);
	fflush(stdin);
	printf("Choose the Operator (+,-,*,/):");
	scanf("%c",&op);
	printf("\nEnter the Second Number :");
	scanf("%d",&b);
	if(op=='+'||op=='-'||op=='*'||op=='/')
	{
		if(op=='+')
		{
			printf("Addition is :%d",a+b);
		}
	    else
		{
			if(op=='-')
			{
			
				printf("Subtraction is :%d",a-b);
			}
			else
			{
				if(op=='*')
				{
					printf("Multiplication is :%d",a*b);
				}
				else
				{
					if(op=='/')
					{
						printf("Division is :%d",a/b);
					}
				}
			}	
		}	
	}
	else
		{
			printf("Choose Valid Operator");
		}
	getch();
}