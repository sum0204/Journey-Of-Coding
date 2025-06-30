// 5. Write a C program to input five numbers and find their average.

#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c,d,e,avg;
	printf("The Five numbers are ");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	
	avg=(a+b+c+d+e)/5;
	printf("The avg of five numbers : %f",avg);
	getch();
}
