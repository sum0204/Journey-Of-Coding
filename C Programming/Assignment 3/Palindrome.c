/*9 Check the given number is Palindrome number or not.
Input: n = 121
Output: Palindrome*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int n=121,r=0,d;
	int temp=n;
	
	while(temp>0)
	{
		d=temp%10;
		r=r*10+d;
		temp=temp/10;
	}
	
	if(r==n)
		printf("Palindrome Number");
	else
		printf("Not Palindrome Number");
	getch();	
}