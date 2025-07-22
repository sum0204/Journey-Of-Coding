/*3. Print an inverted right-angled triangle pattern
Input: n = 5
Output:

*****
****
***
**
*
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int n=5;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=5;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	
	getch();
	
}