/***7. Calculating total salary based on basic. If basic <=5000 da, ta and hra will be 10%,20% and 25% respectively 
otherwise da, ta and hra will be 15%,25% and 30% respectively.***/

#include<stdio.h>
#include<conio.h>
void main()
{
	float basic,da,ta,hra,total_salary;
	printf("Enter the Basic Salary :");
	scanf("%f",&basic);
	
	if(basic<=5000)
	{
		da=0.10 * basic;
		ta=0.20 * basic;
		hra=0.25 * basic;
	}
	else
	{
		da=0.15 * basic;
		ta=0.25 * basic;
		hra=0.30 * basic;
	}
	total_salary = da+ta+hra+basic;
	
	printf("Basic Salary=%.2f",basic);
	printf("\nda is :%.2f",da);
	printf("\nta is :%.2f",ta);
	printf("\nhra is :%.2f",hra);
	printf("\nTotal Salary = %.2f",total_salary);
	getch();
}