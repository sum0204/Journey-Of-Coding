// 4. Write a C program to swap two numbers using a temporary third variable.

#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10,b=20,temp;
	temp=a;
	a=b;
	b=temp;
	printf("Value of a : %d and Value of b :%d",a,b);
	getch();
}