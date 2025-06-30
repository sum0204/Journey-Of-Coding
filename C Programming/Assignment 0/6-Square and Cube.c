// 6. Write a C program to find the square and cube of a given number.

#include<stdio.h>
#include<conio.h>
void main()
{
	int square,cube,n;
	
	printf("Write the Number for find the Square and Cube :");
	scanf("%d",&n);
	
	square =n*n;
	cube =n*n*n;
	
	printf("The Square of given number :%d",square);
	printf("\nThe Cube of given number :%d",cube);
	getch();
}