/*8) Check the given number is Strong number or not.
Input: n = 145
Output: Strong*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int n=145,no,fact,sum=0;
	int temp=n;
	while(temp>0)
	{
		no=temp%10;
		printf("%d\n",no);
		temp=temp/10;
		
		fact=1;
		int i=no;
		while(i>0)
		{
			fact=fact*i;
			i--;
		}
		sum=sum+fact;
	 }	
	 if(sum==n)
	 	printf("Strong Number");
	else
		printf("Not Strong Number");
	getch();
}