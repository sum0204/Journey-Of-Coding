/**3 Sum of numbers in given range.
Find sum of numbers from start to end.
Input: start = 1, end = 5
Output: 15**/

#include<stdio.h>
#include<conio.h>
void main()
{
	int s=1,e=5,sum=0;
	while(s<=e)
	{
		printf("%d\n",s);
		sum=sum+s;
		s++;
	}
	printf("\nsum :%d",sum);
	getch();
}