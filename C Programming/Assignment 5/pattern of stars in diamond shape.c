/*8. Print a pattern of stars in diamond shape
Input: n = 4
Output:

*
**
***
****
***
**
*
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int n=4;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(int i=n-1;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();	
}