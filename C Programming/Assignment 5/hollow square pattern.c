/*9. Print a hollow square pattern
Input: n = 4
Output:

* * * *
*     *
*     *
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
			if(i==1||i==n||j==1||j==n)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	
	
	getch();
	
}