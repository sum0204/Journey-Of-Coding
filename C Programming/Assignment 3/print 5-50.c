/**2 Print table for given number.
Input: n = 5
Output: 5 10 15 20 25 30 35 40 45 50**/

#include<stdio.h>
#include<conio.h>
void main()
{
	int n=5;
	while(n<=50)
	{
		printf("\n%d",n);
		n=n+5;
	}
	getch();
}