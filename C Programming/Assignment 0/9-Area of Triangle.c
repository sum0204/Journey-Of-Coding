// 9. Write a C program to input the base and height of a triangle and calculate its area.

#include<stdio.h>
#include<conio.h>
void main()
{
	float b,h,a;
	
	printf("The value of Base is :");
	scanf("%f",&b);
	
	printf("The value of Height is :");
	scanf("%f",&h);
	
	a=0.5*b*h;
	printf("The Area is :%.2f",a);
	getch();
}