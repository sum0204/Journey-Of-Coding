// 6. Write a program to check whether a given character is uppercase or lowercase.

#include<stdio.h>
#include<conio.h>
void main()
{
	char c='A';
	if (c>='A'&& c<='Z')
		printf("Uppercase Letter");
	else
		printf("Lowercase Letter");
	getch();
}