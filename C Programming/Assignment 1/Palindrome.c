//2. Write a program to check given 3 digit number is pallindrome or not.

#include<stdio.h>
#include<conio.h>
void main()
{
	int no=121,d1,d2,d3,rev;
	
	d1=no/100;
	d2=(no/10)%10;
	d3=no%10;
	rev=d3*100+d2*10+d1;
	if(no==rev)
	{
		printf("Number is palindrome");
	}
	else
	{
		printf("Number is not palindrome");
	}
	
	getch();
}
	
