// 7. Write a C program to convert given minutes into hours and remaining minutes.

#include<stdio.h>
#include<conio.h>
void main()
{
	int hrs,min=150;
	hrs=min/60;
	min=min%60;
	printf("The converison of given minutes into Hours is :%d",hrs);
	printf("\nThe remaining minutes will be :%d",min);
	getch();
}