// 5. Write a program to check whether a person is eligible to vote (age = 18).

#include<stdio.h>
#include<conio.h>
void main()
{
	int age=17;
	if(age>=18)
		printf("Eligible to Vote");
	else
		printf("Not Eligible to Vote");
	getch();
}