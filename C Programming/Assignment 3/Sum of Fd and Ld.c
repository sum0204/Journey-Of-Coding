/*10 Find Sum of first and last digit of given number.
Input: n = 12345
Output: 6 (1 + 5)*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int n=12345;
	int fd,ld;
	
	ld=n%10;
	
	while(n>=10)
	{
		n=n/10;
	}
	fd=n;
	
	printf("Sum of First and Last digit is : %d",fd+ld);
	getch();
	
}