// 3. Write a program to check whether a given year is a leap year.

#include<stdio.h>
#include<conio.h>
void main()
{
	int y=1928;
	if(y%4==0 && y%100!=0 || y%400==0)
	{
		printf("Leap year");
	}
	else
	{
		printf("Not Leap Year");
	}
	getch();
}