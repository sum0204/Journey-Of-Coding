/*10. Print a hollow square with diagonal pattern
Input: n = 5
Output:

* * * * *
* *   * *
*   *   *
* *   * *
* * * * *

*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int n=5;

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if (i==1||i==n||j==1||j==n||i==j||i+j==n+1)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
	getch();
}
