// 2. Accept three sides of a triangle from the user and determine whether the triangle is equilateral, isosceles, or scalene.

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter the value of a :");
	scanf("%d",&a);
	printf("Enter the value of b :");
	scanf("%d",&b);
	printf("Enter the value of c :");
	scanf("%d",&c);
	if(a==b&&b==c)
	{
		printf("Triangle is Equilateral");
	}
	else
	{
		if(a==b||b==c||a==c)
		{
			printf("Triangle is Isosceles");
		}
		else
		{
			printf("Triangle is Scalene");
		}
	}
	getch();
}