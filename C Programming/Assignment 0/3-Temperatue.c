//3.Write a C program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>
#include<conio.h>
void main()
{
	float c,f;
	printf("Give the Temperature of Celsius :");
	scanf("%f",&c);
	
	f=(c*9/5)+32;
	printf("Conversion of Celsius into Fahrenheit : %.2f\n",f);
	getch();
	
}