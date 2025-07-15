/*4 Check the given number is prime or not.
Input: n = 7
Output: Prime*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int n=1,i=2,prime=1;
	while(i<n)
	{
		if(n%i==0)
		{
			prime=0;
			break;
		}
		i++;
	}
	if(prime==1)
		printf("Prime number");
	else
		printf("not a prime number");
	getch();
}
