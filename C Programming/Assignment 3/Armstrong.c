/*5 Check the given number is Armstrong number or not..
Input: n = 153
Output: Armstrong*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int n,num,rem,arm;
	printf("Enter the Number:");
	scanf("%d",&n);
	num=n;
	while(n>0)
	{
		rem=n%10;
		arm=arm+(rem*rem*rem);
		n=n/10;
	}
	if(num==arm)
		printf("\nArmstrong number");
	else
		printf("\nNot an Armstrong number");
	getch();
}