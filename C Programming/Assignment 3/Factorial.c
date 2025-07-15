/*7 Find factorial of given number.
Input: n = 5
Output: 120*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int n=5,i=1;
	while(n>0)
	{
		i=i*n;
		n--;	
	}
	printf("%d",i);
	getch();
}