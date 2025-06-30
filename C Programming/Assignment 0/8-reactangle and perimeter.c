// 8. Write a C program to input the length and width of a rectangle and find its perimeter.

#include<stdio.h>
#include<conio.h>
void main()
{
	int l,b,r,p;
	printf("The value fo Length and Breadth is:");
	scanf("%d%d",&l,&b);
	
	r=l*b;
	p=2*(l+b);
	
	printf("The value of Reactangle is :%d",r);
	printf("\nThe value of Perimeter is :%d",p);
	getch();
}