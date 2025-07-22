/*6. Print a half pyramid using numbers
Input: n = 5
Output:
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n=5;
	
	for(int i=1;i<=n;i++)
	{
		for(int s=1;s<=n-i;s++)
			printf(" ");

		for(int j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
	
}