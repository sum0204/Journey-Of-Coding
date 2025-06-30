// 10. Write a C program to input marks of five subjects, find the total marks, and calculate the percentage.

#include<stdio.h>
#include<conio.h>
void main()
{
	int Eng,C,Py,Java,Html,Total_Marks;
	float Percentage;
	
	Eng=98;
	C=67;
	Py=87;
	Java=89;
	Html=90;
	
	Total_Marks = Eng+C+Py+Java+Html;
	printf("Total Subject Marks :%d",Total_Marks);
	
	Percentage = (Total_Marks/500.0)*100;
	printf("\nThe Percentage :%.2f",Percentage);
	
	getch();	
}