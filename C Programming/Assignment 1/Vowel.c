// 4. Write a program to check whether a given character is a vowel or consonant.

#include<stdio.h>
#include<conio.h>
void main()
{
	char ch='z';
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("Vowel");
	}
	else
	{
		printf("Consonent");
	}
	getch();
}