/*1. Print a solid square pattern
Input: n = 4
Output:

* * * *
* * * *
* * * *
* * * *     
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int n=4;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	
	getch();
	
}